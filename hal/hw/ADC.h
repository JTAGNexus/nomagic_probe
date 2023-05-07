#ifndef HW_ADC_H
#define HW_ADC_H
/* Control and data interface to SAR ADC */
/* Interrupt : ADC_IRQ_FIFO (Vector: 22)  */
/* Memory Block starting at 0x4004C000 + 0x0 is 0x1000 bytes in size. It is used for registers. Protection: n */

#include <stdint.h>

typedef struct
{

/* CS (offset: 0x0)
  ADC Control and Status
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: RROBIN
  offset: 16, size: 5, access: read-write
  Round-robin sampling. 1 bit per channel. Set all bits to 0 to disable.

 Otherwise, the ADC will cycle through each enabled channel in a round-robin fashion.

 The first channel to be sampled will be the one currently indicated by AINSEL.

 AINSEL will be updated after each conversion with the newly-selected channel.
  Field: AINSEL
  offset: 12, size: 3, access: read-write
  Select analog mux input. Updated automatically in round-robin mode.
  Field: ERR_STICKY
  offset: 10, size: 1, access: read-write
  Some past ADC conversion encountered an error. Write 1 to clear.
  Field: ERR
  offset: 9, size: 1, access: read-only
  The most recent ADC conversion encountered an error result is undefined or noisy.
  Field: READY
  offset: 8, size: 1, access: read-only
  1 if the ADC is ready to start a new conversion. Implies any previous conversion has completed.

 0 whilst conversion in progress.
  Field: START_MANY
  offset: 3, size: 1, access: read-write
  Continuously perform conversions whilst this bit is 1. A new conversion will start immediately after the previous finishes.
  Field: START_ONCE
  offset: 2, size: 1, access: read-write
  Start a single conversion. Self-clearing. Ignored if start_many is asserted.
  Field: TS_EN
  offset: 1, size: 1, access: read-write
  Power on temperature sensor. 1 - enabled. 0 - disabled.
  Field: EN
  offset: 0, size: 1, access: read-write
  Power on ADC and enable its clock.

 1 - enabled. 0 - disabled.
*/
volatile uint32_t CS;

/* RESULT (offset: 0x4)
  Result of most recent ADC conversion
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: RESULT
  offset: 0, size: 12, access: read-only
*/
volatile uint32_t RESULT;

/* FCS (offset: 0x8)
  FIFO control and status
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: THRESH
  offset: 24, size: 4, access: read-write
  DREQ/IRQ asserted when level &gt;= threshold
  Field: LEVEL
  offset: 16, size: 4, access: read-only
  The number of conversion results currently waiting in the FIFO
  Field: OVER
  offset: 11, size: 1, access: read-write
  1 if the FIFO has been overflowed. Write 1 to clear.
  Field: UNDER
  offset: 10, size: 1, access: read-write
  1 if the FIFO has been underflowed. Write 1 to clear.
  Field: FULL
  offset: 9, size: 1, access: read-only
  Field: EMPTY
  offset: 8, size: 1, access: read-only
  Field: DREQ_EN
  offset: 3, size: 1, access: read-write
  If 1: assert DMA requests when FIFO contains data
  Field: ERR
  offset: 2, size: 1, access: read-write
  If 1: conversion error bit appears in the FIFO alongside the result
  Field: SHIFT
  offset: 1, size: 1, access: read-write
  If 1: FIFO results are right-shifted to be one byte in size. Enables DMA to byte buffers.
  Field: EN
  offset: 0, size: 1, access: read-write
  If 1: write result to the FIFO after each conversion.
*/
volatile uint32_t FCS;

/* FIFO (offset: 0xc)
  Conversion result FIFO
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: ERR
  offset: 15, size: 1, access: read-only
  1 if this particular sample experienced a conversion error. Remains in the same location if the sample is shifted.
  Field: VAL
  offset: 0, size: 12, access: read-only
*/
volatile uint32_t FIFO;

/* DIV (offset: 0x10)
  Clock divider. If non-zero, CS_START_MANY will start conversions

 at regular intervals rather than back-to-back.

 The divider is reset when either of these fields are written.

 Total period is 1 + INT + FRAC / 256
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INT
  offset: 8, size: 16, access: read-write
  Integer part of clock divisor.
  Field: FRAC
  offset: 0, size: 8, access: read-write
  Fractional part of clock divisor. First-order delta-sigma.
*/
volatile uint32_t DIV;

/* INTR (offset: 0x14)
  Raw Interrupts
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: FIFO
  offset: 0, size: 1, access: read-only
  Triggered when the sample FIFO reaches a certain level.

 This level can be programmed via the FCS_THRESH field.
*/
volatile uint32_t INTR;

/* INTE (offset: 0x18)
  Interrupt Enable
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: FIFO
  offset: 0, size: 1, access: read-write
  Triggered when the sample FIFO reaches a certain level.

 This level can be programmed via the FCS_THRESH field.
*/
volatile uint32_t INTE;

/* INTF (offset: 0x1c)
  Interrupt Force
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: FIFO
  offset: 0, size: 1, access: read-write
  Triggered when the sample FIFO reaches a certain level.

 This level can be programmed via the FCS_THRESH field.
*/
volatile uint32_t INTF;

/* INTS (offset: 0x20)
  Interrupt status after masking &amp; forcing
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: FIFO
  offset: 0, size: 1, access: read-only
  Triggered when the sample FIFO reaches a certain level.

 This level can be programmed via the FCS_THRESH field.
*/
volatile uint32_t INTS;
} ADC_type;

#define ADC ((ADC_type *) 0x4004C000)

#endif // HW_ADC_H
