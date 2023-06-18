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

#include "led.h"
#include <hal/hw/IO_BANK0.h>
#include <hal/hw/PADS_BANK0.h>
#include <hal/hw/PSM.h>
#include <hal/hw/RESETS.h>
#include <hal/hw/SIO.h>
#include "time.h"

#define PATTERN_NORMAL 0
#define PATTERN_ERROR  1

#define NUM_MAX_STEPS  2

#define LED_OFF_ACTION 0
#define LED_ON_ACTION  1

typedef struct {
    uint32_t duration;
    uint32_t action;
}step;

typedef struct {
    uint32_t num_steps;
    step steps[NUM_MAX_STEPS];
}pattern;

pattern patterns[] = {
        // 0 : Normal Operation
        {
                2,
                {
                        { 600, LED_ON_ACTION},
                        { 400, LED_OFF_ACTION},
                }
        },
        // 1 : Error Situation
        {
                2,
                {
                        { 100, LED_ON_ACTION},
                        { 100, LED_OFF_ACTION},
                }
        },
};


uint32_t nextActionTime;
uint32_t lastTime;
uint32_t curPattern;
uint32_t next_step;


// on pico the LED is connected to GPIO 25

void led_init(void)
{
    RESETS->RESET = RESETS->RESET & ~0x00000020lu; // take IO_BANK0 out of Reset
    PSM->FRCE_ON = PSM->FRCE_ON | 0x00000400; // make sure that SIO is powered on
    SIO->GPIO_OE_CLR = 1ul << 25;
    SIO->GPIO_OUT_CLR = 1ul << 25;
    PADS_BANK0->GPIO25 = 0x00000030;
    IO_BANK0->GPIO25_CTRL = 5;
    SIO->GPIO_OE_SET = 1ul << 25;

    nextActionTime = 0;  // do something immediately.
    lastTime = 0;
    curPattern = PATTERN_NORMAL;
    next_step = 0;
}

void led_tick(void)
{
    uint32_t curTime = time_get_ms();
    if(curTime != lastTime)
    {
        lastTime = curTime;
        if(0 == nextActionTime)
        {
            // execute next step
            nextActionTime = patterns[curPattern].steps[next_step].duration;
            switch(patterns[curPattern].steps[next_step].action)
            {
            case LED_OFF_ACTION :
                SIO->GPIO_OUT_CLR = 1 << 25;
                break;

            case LED_ON_ACTION :
                SIO->GPIO_OUT_SET = 1 << 25;
                break;

            default:
                curPattern = PATTERN_ERROR;
                next_step = 0;
                nextActionTime = 0;
                break;
            }
            next_step++;
            if(next_step >= patterns[curPattern].num_steps)
            {
                next_step = 0;
            }
        }
        else
        {
            nextActionTime--;
        }
    }
    // else nothing to do
}
