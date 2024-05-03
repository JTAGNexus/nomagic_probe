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

#ifndef COMMON_H_
#define COMMON_H_

#include <stdbool.h>
#include <stdint.h>

typedef enum {
    NOT_CONNECTED,     // No SWD communication, target MCU might not be present at all
    CONNECTING,        // SWD starts communication, transitional state,
                       // should not take long to either go to connected
                       // or fail and go back to not connected
    CONNECTED_HALTED,  // SWD communication active, MCU is not running / no code execution.
    CONNECTED_RUNNING, // SWD communication active, MCU is running / executing code.
    // new status go here
    NUM_TARGET_STATUS, // <- do not use other than array size !
}target_status_typ;


void target_common_init(void);
void send_part(char* part, uint32_t size, uint32_t offset, uint32_t length);
void target_common_tick(void);
void target_set_status(target_status_typ new_status);
bool common_cmd_target_info(uint32_t loop);

#endif /* COMMON_H_ */