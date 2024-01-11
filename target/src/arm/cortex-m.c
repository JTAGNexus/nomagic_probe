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

#include <stdint.h>
#include "gdb_packets.h"
#include "hex.h"
#include "result.h"
#include "swd.h"

/** Debug Core Register Selector Register
 *  bits 31..17 = reserved
 *  bit 16 = REGWnR (0 = read, 1 = write)
 *  bits 15..5 = reserved
 *  bits 4..0 REGSEL= specifies the register to transfer:
 *
 *  0 0 0 0 0  : R0
 *  0 0 0 0 1  : R1
 *  0 0 0 1 0  : R2
 *  0 0 0 1 1  : R3
 *  0 0 1 0 0  : R4
 *  0 0 1 0 1  : R5
 *  0 0 1 1 0  : R6
 *  0 0 1 1 1  : R7
 *  0 1 0 0 0  : R8
 *  0 1 0 0 1  : R9
 *  0 1 0 1 0  : R10
 *  0 1 0 1 1  : R11
 *  0 1 1 0 0  : R12
 *  0 1 1 0 1  : SP (current stack pointer)
 *  0 1 1 1 0  : LR
 *  0 1 1 1 1  : Debug Return Address (first instruction to be executed on exit from Debug state)
 *  1 0 0 0 0  : xPSR
 *  1 0 0 0 1  : MSP (Main Stack Pointer)
 *  1 0 0 1 0  : PSP (Process Stack Pointer)
 *  1 0 0 1 1  : reserved
 *  1 0 1 0 0  : CONTROL / PRIMASK
 *  1 0 1 0 1  : reserved
 *   . . . .   : reserved
 *  1 1 1 1 1  : reserved
 */
#define DCRSR 0xe000edf4


// Result swd_read_ap(uint32_t addr);
// Result swd_get_result(uint32_t transaction, uint32_t* data);

Result cotex_m_add_general_registers(Result phase)
{
    uint32_t i;
    uint32_t val;
    Result transId;
    Result receive;
    char buf[9];
    buf[8] = 0;

    for(i = 0; i < 17; i++)
    {
        // write i to DCRSR

        transId = 5; // TODO
        receive = swd_get_result(transId, &val);
        if(RESULT_OK == receive)
        {
            int_to_hex(buf, val, 8);
            reply_packet_add(buf);
        }
    }
}
