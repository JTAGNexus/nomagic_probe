#ifndef HW_USBCTRL_DPRAM_H
#define HW_USBCTRL_DPRAM_H
/** DPRAM layout for USB device. */
/** Memory Block starting at 0x50100000 + 0x0 is 0x100 bytes in size. It is used for registers. Protection:  */

#include <stdint.h>

typedef struct
{

/** SETUP_PACKET_LOW (offset: 0x0)
  Bytes 0-3 of the SETUP packet from the host.
  reset value : 0x0
  reset mask : 0x0
  Field: WVALUE
  offset: 16, size: 16, access: read-write
  Field: BREQUEST
  offset: 8, size: 8, access: read-write
  Field: BMREQUESTTYPE
  offset: 0, size: 8, access: read-write
*/
volatile uint32_t SETUP_PACKET_LOW;

/** SETUP_PACKET_HIGH (offset: 0x4)
  Bytes 4-7 of the setup packet from the host.
  reset value : 0x0
  reset mask : 0x0
  Field: WLENGTH
  offset: 16, size: 16, access: read-write
  Field: WINDEX
  offset: 0, size: 16, access: read-write
*/
volatile uint32_t SETUP_PACKET_HIGH;

/** EP1_IN_CONTROL (offset: 0x8)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP1_IN_CONTROL;

/** EP1_OUT_CONTROL (offset: 0xc)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP1_OUT_CONTROL;

/** EP2_IN_CONTROL (offset: 0x10)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP2_IN_CONTROL;

/** EP2_OUT_CONTROL (offset: 0x14)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP2_OUT_CONTROL;

/** EP3_IN_CONTROL (offset: 0x18)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP3_IN_CONTROL;

/** EP3_OUT_CONTROL (offset: 0x1c)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP3_OUT_CONTROL;

/** EP4_IN_CONTROL (offset: 0x20)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP4_IN_CONTROL;

/** EP4_OUT_CONTROL (offset: 0x24)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP4_OUT_CONTROL;

/** EP5_IN_CONTROL (offset: 0x28)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP5_IN_CONTROL;

/** EP5_OUT_CONTROL (offset: 0x2c)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP5_OUT_CONTROL;

/** EP6_IN_CONTROL (offset: 0x30)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP6_IN_CONTROL;

/** EP6_OUT_CONTROL (offset: 0x34)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP6_OUT_CONTROL;

/** EP7_IN_CONTROL (offset: 0x38)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP7_IN_CONTROL;

/** EP7_OUT_CONTROL (offset: 0x3c)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP7_OUT_CONTROL;

/** EP8_IN_CONTROL (offset: 0x40)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP8_IN_CONTROL;

/** EP8_OUT_CONTROL (offset: 0x44)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP8_OUT_CONTROL;

/** EP9_IN_CONTROL (offset: 0x48)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP9_IN_CONTROL;

/** EP9_OUT_CONTROL (offset: 0x4c)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP9_OUT_CONTROL;

/** EP10_IN_CONTROL (offset: 0x50)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP10_IN_CONTROL;

/** EP10_OUT_CONTROL (offset: 0x54)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP10_OUT_CONTROL;

/** EP11_IN_CONTROL (offset: 0x58)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP11_IN_CONTROL;

/** EP11_OUT_CONTROL (offset: 0x5c)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP11_OUT_CONTROL;

/** EP12_IN_CONTROL (offset: 0x60)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP12_IN_CONTROL;

/** EP12_OUT_CONTROL (offset: 0x64)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP12_OUT_CONTROL;

/** EP13_IN_CONTROL (offset: 0x68)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP13_IN_CONTROL;

/** EP13_OUT_CONTROL (offset: 0x6c)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP13_OUT_CONTROL;

/** EP14_IN_CONTROL (offset: 0x70)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP14_IN_CONTROL;

/** EP14_OUT_CONTROL (offset: 0x74)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP14_OUT_CONTROL;

/** EP15_IN_CONTROL (offset: 0x78)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP15_IN_CONTROL;

/** EP15_OUT_CONTROL (offset: 0x7c)
  reset value : 0x0
  reset mask : 0x0
  Field: ENABLE
  offset: 31, size: 1, access: read-write
  Enable this endpoint. The device will not reply to any packets for this endpoint if this bit is not set.
  Field: DOUBLE_BUFFERED
  offset: 30, size: 1, access: read-write
  This endpoint is double buffered.
  Field: INTERRUPT_PER_BUFF
  offset: 29, size: 1, access: read-write
  Trigger an interrupt each time a buffer is done.
  Field: INTERRUPT_PER_DOUBLE_BUFF
  offset: 28, size: 1, access: read-write
  Trigger an interrupt each time both buffers are done. Only valid in double buffered mode.
  Field: ENDPOINT_TYPE
  offset: 26, size: 2, access: read-write
  Enum: 
  Value: 0 - Control
  Value: 1 - Isochronous
  Value: 2 - Bulk
  Value: 3 - Interrupt
  Field: INTERRUPT_ON_STALL
  offset: 17, size: 1, access: read-write
  Trigger an interrupt if a STALL is sent. Intended for debug only.
  Field: INTERRUPT_ON_NAK
  offset: 16, size: 1, access: read-write
  Trigger an interrupt if a NAK is sent. Intended for debug only.
  Field: BUFFER_ADDRESS
  offset: 0, size: 16, access: read-write
  64 byte aligned buffer address for this EP (bits 0-5 are ignored). Relative to the start of the DPRAM.
*/
volatile uint32_t EP15_OUT_CONTROL;

/** EP0_IN_BUFFER_CONTROL (offset: 0x80)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP0_IN_BUFFER_CONTROL;

/** EP0_OUT_BUFFER_CONTROL (offset: 0x84)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP0_OUT_BUFFER_CONTROL;

/** EP1_IN_BUFFER_CONTROL (offset: 0x88)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP1_IN_BUFFER_CONTROL;

/** EP1_OUT_BUFFER_CONTROL (offset: 0x8c)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP1_OUT_BUFFER_CONTROL;

/** EP2_IN_BUFFER_CONTROL (offset: 0x90)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP2_IN_BUFFER_CONTROL;

/** EP2_OUT_BUFFER_CONTROL (offset: 0x94)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP2_OUT_BUFFER_CONTROL;

/** EP3_IN_BUFFER_CONTROL (offset: 0x98)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP3_IN_BUFFER_CONTROL;

/** EP3_OUT_BUFFER_CONTROL (offset: 0x9c)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP3_OUT_BUFFER_CONTROL;

/** EP4_IN_BUFFER_CONTROL (offset: 0xa0)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP4_IN_BUFFER_CONTROL;

/** EP4_OUT_BUFFER_CONTROL (offset: 0xa4)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP4_OUT_BUFFER_CONTROL;

/** EP5_IN_BUFFER_CONTROL (offset: 0xa8)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP5_IN_BUFFER_CONTROL;

/** EP5_OUT_BUFFER_CONTROL (offset: 0xac)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP5_OUT_BUFFER_CONTROL;

/** EP6_IN_BUFFER_CONTROL (offset: 0xb0)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP6_IN_BUFFER_CONTROL;

/** EP6_OUT_BUFFER_CONTROL (offset: 0xb4)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP6_OUT_BUFFER_CONTROL;

/** EP7_IN_BUFFER_CONTROL (offset: 0xb8)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP7_IN_BUFFER_CONTROL;

/** EP7_OUT_BUFFER_CONTROL (offset: 0xbc)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP7_OUT_BUFFER_CONTROL;

/** EP8_IN_BUFFER_CONTROL (offset: 0xc0)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP8_IN_BUFFER_CONTROL;

/** EP8_OUT_BUFFER_CONTROL (offset: 0xc4)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP8_OUT_BUFFER_CONTROL;

/** EP9_IN_BUFFER_CONTROL (offset: 0xc8)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP9_IN_BUFFER_CONTROL;

/** EP9_OUT_BUFFER_CONTROL (offset: 0xcc)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP9_OUT_BUFFER_CONTROL;

/** EP10_IN_BUFFER_CONTROL (offset: 0xd0)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP10_IN_BUFFER_CONTROL;

/** EP10_OUT_BUFFER_CONTROL (offset: 0xd4)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP10_OUT_BUFFER_CONTROL;

/** EP11_IN_BUFFER_CONTROL (offset: 0xd8)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP11_IN_BUFFER_CONTROL;

/** EP11_OUT_BUFFER_CONTROL (offset: 0xdc)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP11_OUT_BUFFER_CONTROL;

/** EP12_IN_BUFFER_CONTROL (offset: 0xe0)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP12_IN_BUFFER_CONTROL;

/** EP12_OUT_BUFFER_CONTROL (offset: 0xe4)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP12_OUT_BUFFER_CONTROL;

/** EP13_IN_BUFFER_CONTROL (offset: 0xe8)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP13_IN_BUFFER_CONTROL;

/** EP13_OUT_BUFFER_CONTROL (offset: 0xec)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP13_OUT_BUFFER_CONTROL;

/** EP14_IN_BUFFER_CONTROL (offset: 0xf0)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP14_IN_BUFFER_CONTROL;

/** EP14_OUT_BUFFER_CONTROL (offset: 0xf4)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP14_OUT_BUFFER_CONTROL;

/** EP15_IN_BUFFER_CONTROL (offset: 0xf8)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP15_IN_BUFFER_CONTROL;

/** EP15_OUT_BUFFER_CONTROL (offset: 0xfc)
  Buffer control for both buffers of an endpoint. Fields ending in a _1 are for buffer 1.

 Fields ending in a _0 are for buffer 0. Buffer 1 controls are only valid if the endpoint is in double buffered mode.
  reset value : 0x0
  reset mask : 0x0
  Field: FULL_1
  offset: 31, size: 1, access: read-write
  Buffer 1 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_1
  offset: 30, size: 1, access: read-write
  Buffer 1 is the last buffer of the transfer.
  Field: PID_1
  offset: 29, size: 1, access: read-write
  The data pid of buffer 1.
  Field: DOUBLE_BUFFER_ISO_OFFSET
  offset: 27, size: 2, access: read-write
  The number of bytes buffer 1 is offset from buffer 0 in Isochronous mode. Only valid in double buffered mode for an Isochronous endpoint.

 For a non Isochronous endpoint the offset is always 64 bytes.
  Enum: 
  Value: 0 - 128
  Value: 1 - 256
  Value: 2 - 512
  Value: 3 - 1024
  Field: AVAILABLE_1
  offset: 26, size: 1, access: read-write
  Buffer 1 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_1
  offset: 16, size: 10, access: read-write
  The length of the data in buffer 1.
  Field: FULL_0
  offset: 15, size: 1, access: read-write
  Buffer 0 is full. For an IN transfer (TX to the host) the bit is set to indicate the data is valid. For an OUT transfer (RX from the host) this bit should be left as a 0. The host will set it when it has filled the buffer with data.
  Field: LAST_0
  offset: 14, size: 1, access: read-write
  Buffer 0 is the last buffer of the transfer.
  Field: PID_0
  offset: 13, size: 1, access: read-write
  The data pid of buffer 0.
  Field: RESET
  offset: 12, size: 1, access: read-write
  Reset the buffer selector to buffer 0.
  Field: STALL
  offset: 11, size: 1, access: read-write
  Reply with a stall (valid for both buffers).
  Field: AVAILABLE_0
  offset: 10, size: 1, access: read-write
  Buffer 0 is available. This bit is set to indicate the buffer can be used by the controller. The controller clears the available bit when writing the status back.
  Field: LENGTH_0
  offset: 0, size: 10, access: read-write
  The length of the data in buffer 0.
*/
volatile uint32_t EP15_OUT_BUFFER_CONTROL;
} USBCTRL_DPRAM_type;

#define USBCTRL_DPRAM ((USBCTRL_DPRAM_type *) 0x50100000)

#endif // HW_USBCTRL_DPRAM_H
