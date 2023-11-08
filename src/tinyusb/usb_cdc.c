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
 * Copyright (c) 2019 Ha Thach (tinyusb.org)
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
#include "usb_cdc.h"
#include <stdint.h>
#include "tinyusb/src/class/cdc/cdc_device.h"

#define INTERFACE   0

static uint8_t nextChar = 0;

void usb_cdc_send_string(char* str)
{
    while(0 != *str)
    {
        tud_cdc_n_write_char(INTERFACE, *str);
        str++;
    }
    tud_cdc_n_write_flush(INTERFACE);
}

uint32_t usb_cdc_send_bytes(uint8_t *data, uint32_t length)
{
    for(uint32_t i = 0; i < length; i++)
    {
        tud_cdc_n_write_char(INTERFACE, data[i]);
    }
    tud_cdc_n_write_flush(INTERFACE);
    return length;
}

uint32_t usb_cdc_get_num_received_bytes(void)
{
    return tud_cdc_n_available(INTERFACE);
}

uint8_t  usb_cdc_get_next_received_byte(void)
{
    nextChar = 0;
    tud_cdc_n_read(INTERFACE, &nextChar, 1);
    return nextChar;
}

