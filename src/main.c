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
#include "hal/debug_uart.h"
#include "hal/hw/IO_BANK0.h"
#include "hal/hw/PADS_BANK0.h"
#include "hal/hw/PSM.h"
#include "hal/hw/RESETS.h"
#include "hal/hw/SIO.h"
#include "hal/hw/XOSC.h"
#include "hal/watchdog.h"
#ifdef BOOT_ROM_ENABLED
#include "hal/boot_rom.h"
#endif
#include "cli/cli_priv.h"
#include "hal/time_base.h"
#include <stdint.h>
#include "tinyusb/usb.h"
#include "tinyusb/src/tusb.h"
#include "led.h"
#include "gdbserver/gdbserver.h"
#include "file/file_system.h"
#include "swd/swd_engine.h"
#include "target/priv_common.h"
#ifdef FEAT_DEBUG_CDC
#include "tinyusb/usb_cdc.h"
#endif
#ifdef FEAT_USB_NCM
#include "lwip.h"
#include "cfg/network_cfg.h"
#endif
#include "cfg/serial_cfg.h"

#define TASK_LOOP_0           0x1ul
#define TASK_LOOP_1           0x2ul
#define ALL_SUPERVISED_TASKS  (TASK_LOOP_0 | TASK_LOOP_1)


static void init_0(void);
static void init_1(void);
static void loop_0(void);
static void loop_1(void);

static uint32_t tasks = 0;

static void init_0(void)
{
#ifdef BOOT_ROM_ENABLED
    boot_rom_check_if_valid();
#endif

    tasks = ALL_SUPERVISED_TASKS;
    watchdog_enable();
    init_time();

#ifdef FEAT_DEBUG_UART
    debug_uart_initialize();
    init_printf(NULL, debug_putc);
#endif
#ifdef FEAT_DEBUG_CDC
    init_printf(NULL, usb_cdc_putc);
#endif

#ifdef FEAT_USB_MSC
    file_system_init();
#endif

    serial_cfg_load();

#ifdef FEAT_USB_NCM
    network_cfg_load();
    network_stack_init();
#endif

    usb_init();

    target_init();

#ifdef FEAT_GDB_SERVER
    gdbserver_init();
#endif

#if (defined FEAT_DEBUG_UART) || (defined FEAT_DEBUG_CDC)
    cli_init(); // should be last to signal that initialization is complete.
#endif
}

static void init_1(void)
{
    led_init();
}

static void loop_0(void)
{
    watchdog_enter_section(SECTION_WATCHDOG);
    tasks = tasks &~TASK_LOOP_0;
    if(0 == tasks)
    {
        watchdog_feed();
        tasks = ALL_SUPERVISED_TASKS;
    }
    watchdog_leave_section(SECTION_WATCHDOG);

#if (defined FEAT_DEBUG_UART) || (defined FEAT_DEBUG_CDC)
    watchdog_enter_section(SECTION_CLI);
    cli_tick();
    watchdog_leave_section(SECTION_CLI);
#endif

    watchdog_enter_section(SECTION_USB);
    usb_tick();
    watchdog_leave_section(SECTION_USB);

#ifdef FEAT_GDB_SERVER
    watchdog_enter_section(SECTION_GDBSERVER);
    gdbserver_tick();
    watchdog_leave_section(SECTION_GDBSERVER);
#endif

#ifdef FEAT_USB_NCM
    if(true == network_cfg_is_network_enabled())
    {
        watchdog_enter_section(SECTION_LWIP);
        network_stack_tick();
        watchdog_leave_section(SECTION_LWIP);
    }
    // else no network
#endif
}

static void loop_1(void)
{
    tasks = tasks &~TASK_LOOP_1;
    watchdog_enter_section(SECTION_LED);
    led_tick();
    watchdog_leave_section(SECTION_LED);

    watchdog_enter_section(SECTION_TARGET);
    target_tick();
    watchdog_leave_section(SECTION_TARGET);
}

#ifdef ENABLE_CORE_1
void main1(void)
{
    watchdog_enter_section(SECTION_INIT);
    init_1();
    watchdog_leave_section(SECTION_INIT);
    for(;;)
    {
        loop_1();
    }
}

#endif

void main(void)
{
    watchdog_enter_section(SECTION_INIT);
#ifdef ENABLE_CORE_1
    init_0();
#else
    init_0();
    init_1();
#endif
    watchdog_leave_section(SECTION_INIT);
    for(;;)
    {
#ifdef ENABLE_CORE_1
        loop_0();
#else
        loop_0();
        loop_1();
#endif
    }
}

