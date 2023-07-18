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
#ifndef CLI_CLI_MEMORY_H_
#define CLI_CLI_MEMORY_H_

#include <stdbool.h>

bool cmd_memory_display(void);
bool cmd_memory_dump(void);
bool cmd_flash_memory_erase(void);
bool cmd_flash_memory_write(void);
bool cmd_flash_disable_XIP(void);
bool cmd_flash_enable_XIP(void);

#endif /* CLI_CLI_MEMORY_H_ */
