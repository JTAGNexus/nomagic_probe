/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>
 *
 */

/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Peter Lawrence
 *
 * influenced by lrndis https://github.com/fetisov/lrndis
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

/*
From lwip documentation: (https://www.nongnu.org/lwip/2_1_x/pitfalls.html)

Multiple Execution Contexts in lwIP code

The most common source of lwIP problems is to have multiple execution contexts inside the lwIP code.

lwIP can be used in two basic modes: Mainloop mode ("NO_SYS") (no OS/RTOS running on target system) or OS mode (TCPIP thread) (there is an OS running on the target system).

See also: Multithreading (especially the part about LWIP_ASSERT_CORE_LOCKED()!)
Mainloop Mode

In mainloop mode, only "raw" APIs can be used. The user has two possibilities to ensure there is only one exection context at a time in lwIP:

1) Deliver RX ethernet packets directly in interrupt context to lwIP by calling netif->input directly in interrupt. This implies all lwIP callback functions are called in IRQ context, which may cause further problems in application code: IRQ is blocked for a long time, multiple execution contexts in application code etc. When the application wants to call lwIP, it only needs to disable interrupts during the call. If timers are involved, even more locking code is needed to lock out timer IRQ and ethernet IRQ from each other, assuming these may be nested.

2) Run lwIP in a mainloop. There is example code here: Mainloop mode ("NO_SYS"). lwIP is ONLY called from mainloop callstacks here. The ethernet IRQ has to put received telegrams into a queue which is polled in the mainloop. Ensure lwIP is NEVER called from an interrupt, e.g. some SPI IRQ wants to forward data to udp_send() or tcp_write()!

 */

/*
 *  This file is the virtual Ethernet cable that connects the
 *          USB-NCM (USB to Ethernet adaptor)
 *                  with the
 *          lwip Ethernet driver.
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include "lwip.h"
#include "cfg/network_cfg.h"
#include "hal/time_base.h"
#include "probe_api/debug_log.h"
// lwip
#include "lwip/src/include/lwip/init.h"
#include "lwip/src/include/lwip/netif.h"
#include "lwip/src/include/lwip/timeouts.h"
#include "lwip/src/include/lwip/dhcp.h"
#include "lwip/src/include/lwip/err.h"
#include "lwip/src/include/lwip/etharp.h"
#include "lwip/src/include/lwip/ip.h"
#include "lwip/src/include/netif/ethernet.h"
// tinyusb
#include "tusb.h"


static err_t netif_init_function(struct netif *netif);
// static err_t netif_input_function(struct pbuf *p, struct netif *inp);
static err_t linkoutput_fn(struct netif *netif, struct pbuf *p);


static struct netif ncm_netif;
// shared between tud_network_recv_cb() and network_stack_tick()
static struct pbuf *received_frame;

/// Buffer for lwIP -> TinyUSB transmission
static uint8_t  xmt_buff[CFG_TUD_NET_MTU + 10];    // MTU plus some margin
static volatile uint16_t xmt_buff_len = 0;


/* this is used by this code, ./class/net/net_driver.c, and usb_descriptors.c */
/* ideally speaking, this should be generated from the hardware's unique ID (if available) */
/* it is suggested that the first byte is 0x02 to indicate a link-local address */
uint8_t tud_network_mac_address[6] = {0x02, 0x02, 0x84, 0x6A, 0x96, 0x00};


void network_stack_init(void)
{
    received_frame = NULL;
    if(true == network_cfg_is_network_enabled())
    {
        lwip_init();

        netif_add(&ncm_netif, // struct netif *netif
                  &net_cfg.ip,
                  &net_cfg.netmask,
                  &net_cfg.gateway,
                  NULL, // void *state
                  netif_init_function, // netif_init_fn init
                  ethernet_input// netif_input_function // netif_input_fn input
                  );
        netif_set_default(&ncm_netif);
        netif_set_up(&ncm_netif);
    }
    // else no network
}

void network_stack_tick(void)
{
    if(NULL != received_frame)
    {
        // handle any packet received from USB ( tud_network_recv_cb() )
        // debug_msg("received packet with size %d / %d !", received_frame->len, received_frame->tot_len);
        // debug_msg("buffer @ 0x%08lx", (uint32_t)(received_frame->payload));
        ethernet_input(received_frame, &ncm_netif);
        // pbuf_free(received_frame);
        received_frame = NULL;
        tud_network_recv_renew();
    }

    if(0 != xmt_buff_len)
    {
        if(true == tud_network_can_xmit(xmt_buff_len))
        {
            tud_network_xmit(xmt_buff, xmt_buff_len);
            xmt_buff_len = 0;
        }
    }

    // Cyclic lwIP timers check
    sys_check_timeouts();
}

u32_t sys_now(void)
{
    return time_get_ms();
}

/** lwIP initialization function
 *
 * @param netif The netif to initialize
 */
static err_t netif_init_function(struct netif *netif)
{
    LWIP_ASSERT("netif != NULL", (netif != NULL));
    netif->mtu = CFG_TUD_NET_MTU;
    netif->flags |= NETIF_FLAG_BROADCAST | NETIF_FLAG_ETHARP | NETIF_FLAG_LINK_UP | NETIF_FLAG_UP;
    netif->state = NULL;
    netif->name[0] = 'E';
    netif->name[1] = 'X';
    netif->linkoutput = linkoutput_fn;
    netif->output = etharp_output;
    // netif->state = // void*  // TODO not yet needed
    /* the lwip virtual MAC address must be different from the host's; to ensure this, we toggle the LSbit */
    netif->hwaddr_len = sizeof(tud_network_mac_address);
    memcpy(netif->hwaddr, tud_network_mac_address, sizeof(tud_network_mac_address));
    netif->hwaddr[5] ^= 0x01;     // don't know what for, but everybody is doing it...
    netif->hwaddr_len = 6;
    memcpy(netif->hwaddr, tud_network_mac_address, 6);
    netif->num = 0;
#if LWIP_IPV6
    netif->output_ip6 = ip6_output_fn;
#endif

    // if the network is re-initializing and we have a leftover packet, we must do a cleanup
    if(NULL != received_frame)
    {
        // pbuf_free(received_frame);
        received_frame = NULL;
    }
    return ERR_OK;
}

/** called by lwIP to transmit data to tinyUSB.
 * (lwIp -> tinyUSB)
 */
static err_t linkoutput_fn(struct netif *netif, struct pbuf *p)
{
    (void)netif;

    if(!tud_ready())
    {
        return ERR_USE;
    }

    // copy data into temp buffer
    if(p->tot_len > sizeof(xmt_buff))
    {
        return ERR_USE;
    }

    xmt_buff_len = pbuf_copy_partial(p, xmt_buff, p->tot_len, 0);

    return ERR_OK;
}

/** tinyUSB(NCM) want to get the actual bytes copied into its buffer
 *
 * @param dst destination - tinyUSB(NCM) buffer
 * @param ref source - our buffer
 * @param arg number of bytes to copy
 * @return number of bytes copied.
 */
uint16_t tud_network_xmit_cb(uint8_t *dst, void *ref, uint16_t arg)
{
    memcpy(dst, ref, arg);
    return arg;
}

// tinyUSB has received a Ethernet packet from the USB host.
bool tud_network_recv_cb(const uint8_t *src, uint16_t size)
{
    if(NULL != received_frame)
    {
        // this shouldn't happen, but if we get another packet before
        // parsing the previous, we must signal our inability to accept it
        return false;
    }

    if(0 != size)
    {
        struct pbuf * p = pbuf_alloc(PBUF_RAW, size + 2, PBUF_POOL);

        if(NULL != p)
        {
            if(NULL == p->payload)
            {
                debug_msg("no payload buffer !");
                return false;
            }
            // pbuf_alloc() has already initialized struct; all we need to do is copy the data
            /*  ETH_PAD_SIZE = 2
            {
                uint8_t * pl = (uint8_t *)p->payload;
                pl[0] = 0;
                pl[1] = 0;
                memcpy(&(pl[2]), src, size);
            }*/
            memcpy(p->payload, src, size);

            // store away the pointer for network_stack_tick() to later handle
            received_frame = p;
        }
        else
        {
            // pbuf_alloc() failed
            return false;
        }
    }
    // else we handled the 0 bytes of the packet ;-)

    // we will handle the packet
    return true;
}

