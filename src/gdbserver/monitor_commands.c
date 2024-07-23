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
#include <stdio.h>

#include "probe_api/gdb_monitor_commands.h"
#include "probe_api/gdb_monitor_defs.h"
#include "probe_api/gdb_packets.h"
#include "probe_api/util.h"
#include "target.h"

#define NUM_MON_COMMANDS  (sizeof(mon_commands)/sizeof(mon_cmd_typ))

void mon_cmd_help(void)
{
    // TODO split this up ?
    // help command
    char buf[100];
    char hex_buf[200];
    uint32_t loop;
    reply_packet_prepare();
    reply_packet_add("O"); // packet is $ big oh, hex string# checksum
    for(loop = 0; loop < NUM_MON_COMMANDS; loop++)
    {
        snprintf(buf, 100, "%15s : %s", mon_commands[loop].name, mon_commands[loop].help);
        encode_text_to_hex_string(buf, sizeof(hex_buf), hex_buf);
        reply_packet_add(buf);
    }
    reply_packet_send();
    gdb_is_not_busy_anymore();
}
