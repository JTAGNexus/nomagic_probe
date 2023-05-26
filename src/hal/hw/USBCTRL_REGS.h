#ifndef HW_USBCTRL_REGS_H
#define HW_USBCTRL_REGS_H
/** USB FS/LS controller device registers */
/** Interrupt : USBCTRL_IRQ (Vector: 5)  */
/** Memory Block starting at 0x50110000 + 0x0 is 0x1000 bytes in size. It is used for registers. Protection: n */

#include <stdint.h>

typedef struct
{

/** ADDR_ENDP (offset: 0x0)
  Device address and endpoint control
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Device endpoint to send data to. Only valid for HOST mode.
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  In device mode, the address that the device should respond to. Set in response to a SET_ADDR setup packet from the host. In host mode set to the address of the device to communicate with.
*/
volatile uint32_t ADDR_ENDP;

/** ADDR_ENDP1 (offset: 0x4)
  Interrupt endpoint 1. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP1;

/** ADDR_ENDP2 (offset: 0x8)
  Interrupt endpoint 2. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP2;

/** ADDR_ENDP3 (offset: 0xc)
  Interrupt endpoint 3. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP3;

/** ADDR_ENDP4 (offset: 0x10)
  Interrupt endpoint 4. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP4;

/** ADDR_ENDP5 (offset: 0x14)
  Interrupt endpoint 5. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP5;

/** ADDR_ENDP6 (offset: 0x18)
  Interrupt endpoint 6. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP6;

/** ADDR_ENDP7 (offset: 0x1c)
  Interrupt endpoint 7. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP7;

/** ADDR_ENDP8 (offset: 0x20)
  Interrupt endpoint 8. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP8;

/** ADDR_ENDP9 (offset: 0x24)
  Interrupt endpoint 9. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP9;

/** ADDR_ENDP10 (offset: 0x28)
  Interrupt endpoint 10. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP10;

/** ADDR_ENDP11 (offset: 0x2c)
  Interrupt endpoint 11. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP11;

/** ADDR_ENDP12 (offset: 0x30)
  Interrupt endpoint 12. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP12;

/** ADDR_ENDP13 (offset: 0x34)
  Interrupt endpoint 13. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP13;

/** ADDR_ENDP14 (offset: 0x38)
  Interrupt endpoint 14. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP14;

/** ADDR_ENDP15 (offset: 0x3c)
  Interrupt endpoint 15. Only valid for HOST mode.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INTEP_PREAMBLE
  offset: 26, size: 1, access: read-write
  Interrupt EP requires preamble (is a low speed device on a full speed hub)
  Field: INTEP_DIR
  offset: 25, size: 1, access: read-write
  Direction of the interrupt endpoint. In=0, Out=1
  Field: ENDPOINT
  offset: 16, size: 4, access: read-write
  Endpoint number of the interrupt endpoint
  Field: ADDRESS
  offset: 0, size: 7, access: read-write
  Device address
*/
volatile uint32_t ADDR_ENDP15;

/** MAIN_CTRL (offset: 0x40)
  Main control register
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: SIM_TIMING
  offset: 31, size: 1, access: read-write
  Reduced timings for simulation
  Field: HOST_NDEVICE
  offset: 1, size: 1, access: read-write
  Device mode = 0, Host mode = 1
  Field: CONTROLLER_EN
  offset: 0, size: 1, access: read-write
  Enable controller
*/
volatile uint32_t MAIN_CTRL;

/** SOF_WR (offset: 0x44)
  Set the SOF (Start of Frame) frame number in the host controller. The SOF packet is sent every 1ms and the host will increment the frame number by 1 each time.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: COUNT
  offset: 0, size: 11, access: write-only
*/
volatile uint32_t SOF_WR;

/** SOF_RD (offset: 0x48)
  Read the last SOF (Start of Frame) frame number seen. In device mode the last SOF received from the host. In host mode the last SOF sent by the host.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: COUNT
  offset: 0, size: 11, access: read-only
*/
volatile uint32_t SOF_RD;

/** SIE_CTRL (offset: 0x4c)
  SIE control register
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP0_INT_STALL
  offset: 31, size: 1, access: read-write
  Device: Set bit in EP_STATUS_STALL_NAK when EP0 sends a STALL
  Field: EP0_DOUBLE_BUF
  offset: 30, size: 1, access: read-write
  Device: EP0 single buffered = 0, double buffered = 1
  Field: EP0_INT_1BUF
  offset: 29, size: 1, access: read-write
  Device: Set bit in BUFF_STATUS for every buffer completed on EP0
  Field: EP0_INT_2BUF
  offset: 28, size: 1, access: read-write
  Device: Set bit in BUFF_STATUS for every 2 buffers completed on EP0
  Field: EP0_INT_NAK
  offset: 27, size: 1, access: read-write
  Device: Set bit in EP_STATUS_STALL_NAK when EP0 sends a NAK
  Field: DIRECT_EN
  offset: 26, size: 1, access: read-write
  Direct bus drive enable
  Field: DIRECT_DP
  offset: 25, size: 1, access: read-write
  Direct control of DP
  Field: DIRECT_DM
  offset: 24, size: 1, access: read-write
  Direct control of DM
  Field: TRANSCEIVER_PD
  offset: 18, size: 1, access: read-write
  Power down bus transceiver
  Field: RPU_OPT
  offset: 17, size: 1, access: read-write
  Device: Pull-up strength (0=1K2, 1=2k3)
  Field: PULLUP_EN
  offset: 16, size: 1, access: read-write
  Device: Enable pull up resistor
  Field: PULLDOWN_EN
  offset: 15, size: 1, access: read-write
  Host: Enable pull down resistors
  Field: RESET_BUS
  offset: 13, size: 1, access: read-write
  Host: Reset bus
  Field: RESUME
  offset: 12, size: 1, access: read-write
  Device: Remote wakeup. Device can initiate its own resume after suspend.
  Field: VBUS_EN
  offset: 11, size: 1, access: read-write
  Host: Enable VBUS
  Field: KEEP_ALIVE_EN
  offset: 10, size: 1, access: read-write
  Host: Enable keep alive packet (for low speed bus)
  Field: SOF_EN
  offset: 9, size: 1, access: read-write
  Host: Enable SOF generation (for full speed bus)
  Field: SOF_SYNC
  offset: 8, size: 1, access: read-write
  Host: Delay packet(s) until after SOF
  Field: PREAMBLE_EN
  offset: 6, size: 1, access: read-write
  Host: Preable enable for LS device on FS hub
  Field: STOP_TRANS
  offset: 4, size: 1, access: read-write
  Host: Stop transaction
  Field: RECEIVE_DATA
  offset: 3, size: 1, access: read-write
  Host: Receive transaction (IN to host)
  Field: SEND_DATA
  offset: 2, size: 1, access: read-write
  Host: Send transaction (OUT from host)
  Field: SEND_SETUP
  offset: 1, size: 1, access: read-write
  Host: Send Setup packet
  Field: START_TRANS
  offset: 0, size: 1, access: read-write
  Host: Start transaction
*/
volatile uint32_t SIE_CTRL;

/** SIE_STATUS (offset: 0x50)
  SIE status register
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: DATA_SEQ_ERROR
  offset: 31, size: 1, access: read-write
  Data Sequence Error.


 The device can raise a sequence error in the following conditions:


 * A SETUP packet is received followed by a DATA1 packet (data phase should always be DATA0) * An OUT packet is received from the host but doesn&apos;t match the data pid in the buffer control register read from DPSRAM


 The host can raise a data sequence error in the following conditions:


 * An IN packet from the device has the wrong data PID
  Field: ACK_REC
  offset: 30, size: 1, access: read-write
  ACK received. Raised by both host and device.
  Field: STALL_REC
  offset: 29, size: 1, access: read-write
  Host: STALL received
  Field: NAK_REC
  offset: 28, size: 1, access: read-write
  Host: NAK received
  Field: RX_TIMEOUT
  offset: 27, size: 1, access: read-write
  RX timeout is raised by both the host and device if an ACK is not received in the maximum time specified by the USB spec.
  Field: RX_OVERFLOW
  offset: 26, size: 1, access: read-write
  RX overflow is raised by the Serial RX engine if the incoming data is too fast.
  Field: BIT_STUFF_ERROR
  offset: 25, size: 1, access: read-write
  Bit Stuff Error. Raised by the Serial RX engine.
  Field: CRC_ERROR
  offset: 24, size: 1, access: read-write
  CRC Error. Raised by the Serial RX engine.
  Field: BUS_RESET
  offset: 19, size: 1, access: read-write
  Device: bus reset received
  Field: TRANS_COMPLETE
  offset: 18, size: 1, access: read-write
  Transaction complete.


 Raised by device if:


 * An IN or OUT packet is sent with the `LAST_BUFF` bit set in the buffer control register


 Raised by host if:


 * A setup packet is sent when no data in or data out transaction follows * An IN packet is received and the `LAST_BUFF` bit is set in the buffer control register * An IN packet is received with zero length * An OUT packet is sent and the `LAST_BUFF` bit is set
  Field: SETUP_REC
  offset: 17, size: 1, access: read-write
  Device: Setup packet received
  Field: CONNECTED
  offset: 16, size: 1, access: read-write
  Device: connected
  Field: RESUME
  offset: 11, size: 1, access: read-write
  Host: Device has initiated a remote resume. Device: host has initiated a resume.
  Field: VBUS_OVER_CURR
  offset: 10, size: 1, access: read-only
  VBUS over current detected
  Field: SPEED
  offset: 8, size: 2, access: read-write
  Host: device speed. Disconnected = 00, LS = 01, FS = 10
  Field: SUSPENDED
  offset: 4, size: 1, access: read-write
  Bus in suspended state. Valid for device and host. Host and device will go into suspend if neither Keep Alive / SOF frames are enabled.
  Field: LINE_STATE
  offset: 2, size: 2, access: read-only
  USB bus line state
  Field: VBUS_DETECTED
  offset: 0, size: 1, access: read-only
  Device: VBUS Detected
*/
volatile uint32_t SIE_STATUS;

/** INT_EP_CTRL (offset: 0x54)
  interrupt endpoint control register
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: INT_EP_ACTIVE
  offset: 1, size: 15, access: read-write
  Host: Enable interrupt endpoint 1 -&gt; 15
*/
volatile uint32_t INT_EP_CTRL;

/** BUFF_STATUS (offset: 0x58)
  Buffer status register. A bit set here indicates that a buffer has completed on the endpoint (if the buffer interrupt is enabled). It is possible for 2 buffers to be completed, so clearing the buffer status bit may instantly re set it on the next clock cycle.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP15_OUT
  offset: 31, size: 1, access: read-write
  Field: EP15_IN
  offset: 30, size: 1, access: read-write
  Field: EP14_OUT
  offset: 29, size: 1, access: read-write
  Field: EP14_IN
  offset: 28, size: 1, access: read-write
  Field: EP13_OUT
  offset: 27, size: 1, access: read-write
  Field: EP13_IN
  offset: 26, size: 1, access: read-write
  Field: EP12_OUT
  offset: 25, size: 1, access: read-write
  Field: EP12_IN
  offset: 24, size: 1, access: read-write
  Field: EP11_OUT
  offset: 23, size: 1, access: read-write
  Field: EP11_IN
  offset: 22, size: 1, access: read-write
  Field: EP10_OUT
  offset: 21, size: 1, access: read-write
  Field: EP10_IN
  offset: 20, size: 1, access: read-write
  Field: EP9_OUT
  offset: 19, size: 1, access: read-write
  Field: EP9_IN
  offset: 18, size: 1, access: read-write
  Field: EP8_OUT
  offset: 17, size: 1, access: read-write
  Field: EP8_IN
  offset: 16, size: 1, access: read-write
  Field: EP7_OUT
  offset: 15, size: 1, access: read-write
  Field: EP7_IN
  offset: 14, size: 1, access: read-write
  Field: EP6_OUT
  offset: 13, size: 1, access: read-write
  Field: EP6_IN
  offset: 12, size: 1, access: read-write
  Field: EP5_OUT
  offset: 11, size: 1, access: read-write
  Field: EP5_IN
  offset: 10, size: 1, access: read-write
  Field: EP4_OUT
  offset: 9, size: 1, access: read-write
  Field: EP4_IN
  offset: 8, size: 1, access: read-write
  Field: EP3_OUT
  offset: 7, size: 1, access: read-write
  Field: EP3_IN
  offset: 6, size: 1, access: read-write
  Field: EP2_OUT
  offset: 5, size: 1, access: read-write
  Field: EP2_IN
  offset: 4, size: 1, access: read-write
  Field: EP1_OUT
  offset: 3, size: 1, access: read-write
  Field: EP1_IN
  offset: 2, size: 1, access: read-write
  Field: EP0_OUT
  offset: 1, size: 1, access: read-write
  Field: EP0_IN
  offset: 0, size: 1, access: read-write
*/
volatile uint32_t BUFF_STATUS;

/** BUFF_CPU_SHOULD_HANDLE (offset: 0x5c)
  Which of the double buffers should be handled. Only valid if using an interrupt per buffer (i.e. not per 2 buffers). Not valid for host interrupt endpoint polling because they are only single buffered.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP15_OUT
  offset: 31, size: 1, access: read-only
  Field: EP15_IN
  offset: 30, size: 1, access: read-only
  Field: EP14_OUT
  offset: 29, size: 1, access: read-only
  Field: EP14_IN
  offset: 28, size: 1, access: read-only
  Field: EP13_OUT
  offset: 27, size: 1, access: read-only
  Field: EP13_IN
  offset: 26, size: 1, access: read-only
  Field: EP12_OUT
  offset: 25, size: 1, access: read-only
  Field: EP12_IN
  offset: 24, size: 1, access: read-only
  Field: EP11_OUT
  offset: 23, size: 1, access: read-only
  Field: EP11_IN
  offset: 22, size: 1, access: read-only
  Field: EP10_OUT
  offset: 21, size: 1, access: read-only
  Field: EP10_IN
  offset: 20, size: 1, access: read-only
  Field: EP9_OUT
  offset: 19, size: 1, access: read-only
  Field: EP9_IN
  offset: 18, size: 1, access: read-only
  Field: EP8_OUT
  offset: 17, size: 1, access: read-only
  Field: EP8_IN
  offset: 16, size: 1, access: read-only
  Field: EP7_OUT
  offset: 15, size: 1, access: read-only
  Field: EP7_IN
  offset: 14, size: 1, access: read-only
  Field: EP6_OUT
  offset: 13, size: 1, access: read-only
  Field: EP6_IN
  offset: 12, size: 1, access: read-only
  Field: EP5_OUT
  offset: 11, size: 1, access: read-only
  Field: EP5_IN
  offset: 10, size: 1, access: read-only
  Field: EP4_OUT
  offset: 9, size: 1, access: read-only
  Field: EP4_IN
  offset: 8, size: 1, access: read-only
  Field: EP3_OUT
  offset: 7, size: 1, access: read-only
  Field: EP3_IN
  offset: 6, size: 1, access: read-only
  Field: EP2_OUT
  offset: 5, size: 1, access: read-only
  Field: EP2_IN
  offset: 4, size: 1, access: read-only
  Field: EP1_OUT
  offset: 3, size: 1, access: read-only
  Field: EP1_IN
  offset: 2, size: 1, access: read-only
  Field: EP0_OUT
  offset: 1, size: 1, access: read-only
  Field: EP0_IN
  offset: 0, size: 1, access: read-only
*/
volatile uint32_t BUFF_CPU_SHOULD_HANDLE;

/** EP_ABORT (offset: 0x60)
  Device only: Can be set to ignore the buffer control register for this endpoint in case you would like to revoke a buffer. A NAK will be sent for every access to the endpoint until this bit is cleared. A corresponding bit in `EP_ABORT_DONE` is set when it is safe to modify the buffer control register.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP15_OUT
  offset: 31, size: 1, access: read-write
  Field: EP15_IN
  offset: 30, size: 1, access: read-write
  Field: EP14_OUT
  offset: 29, size: 1, access: read-write
  Field: EP14_IN
  offset: 28, size: 1, access: read-write
  Field: EP13_OUT
  offset: 27, size: 1, access: read-write
  Field: EP13_IN
  offset: 26, size: 1, access: read-write
  Field: EP12_OUT
  offset: 25, size: 1, access: read-write
  Field: EP12_IN
  offset: 24, size: 1, access: read-write
  Field: EP11_OUT
  offset: 23, size: 1, access: read-write
  Field: EP11_IN
  offset: 22, size: 1, access: read-write
  Field: EP10_OUT
  offset: 21, size: 1, access: read-write
  Field: EP10_IN
  offset: 20, size: 1, access: read-write
  Field: EP9_OUT
  offset: 19, size: 1, access: read-write
  Field: EP9_IN
  offset: 18, size: 1, access: read-write
  Field: EP8_OUT
  offset: 17, size: 1, access: read-write
  Field: EP8_IN
  offset: 16, size: 1, access: read-write
  Field: EP7_OUT
  offset: 15, size: 1, access: read-write
  Field: EP7_IN
  offset: 14, size: 1, access: read-write
  Field: EP6_OUT
  offset: 13, size: 1, access: read-write
  Field: EP6_IN
  offset: 12, size: 1, access: read-write
  Field: EP5_OUT
  offset: 11, size: 1, access: read-write
  Field: EP5_IN
  offset: 10, size: 1, access: read-write
  Field: EP4_OUT
  offset: 9, size: 1, access: read-write
  Field: EP4_IN
  offset: 8, size: 1, access: read-write
  Field: EP3_OUT
  offset: 7, size: 1, access: read-write
  Field: EP3_IN
  offset: 6, size: 1, access: read-write
  Field: EP2_OUT
  offset: 5, size: 1, access: read-write
  Field: EP2_IN
  offset: 4, size: 1, access: read-write
  Field: EP1_OUT
  offset: 3, size: 1, access: read-write
  Field: EP1_IN
  offset: 2, size: 1, access: read-write
  Field: EP0_OUT
  offset: 1, size: 1, access: read-write
  Field: EP0_IN
  offset: 0, size: 1, access: read-write
*/
volatile uint32_t EP_ABORT;

/** EP_ABORT_DONE (offset: 0x64)
  Device only: Used in conjunction with `EP_ABORT`. Set once an endpoint is idle so the programmer knows it is safe to modify the buffer control register.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP15_OUT
  offset: 31, size: 1, access: read-write
  Field: EP15_IN
  offset: 30, size: 1, access: read-write
  Field: EP14_OUT
  offset: 29, size: 1, access: read-write
  Field: EP14_IN
  offset: 28, size: 1, access: read-write
  Field: EP13_OUT
  offset: 27, size: 1, access: read-write
  Field: EP13_IN
  offset: 26, size: 1, access: read-write
  Field: EP12_OUT
  offset: 25, size: 1, access: read-write
  Field: EP12_IN
  offset: 24, size: 1, access: read-write
  Field: EP11_OUT
  offset: 23, size: 1, access: read-write
  Field: EP11_IN
  offset: 22, size: 1, access: read-write
  Field: EP10_OUT
  offset: 21, size: 1, access: read-write
  Field: EP10_IN
  offset: 20, size: 1, access: read-write
  Field: EP9_OUT
  offset: 19, size: 1, access: read-write
  Field: EP9_IN
  offset: 18, size: 1, access: read-write
  Field: EP8_OUT
  offset: 17, size: 1, access: read-write
  Field: EP8_IN
  offset: 16, size: 1, access: read-write
  Field: EP7_OUT
  offset: 15, size: 1, access: read-write
  Field: EP7_IN
  offset: 14, size: 1, access: read-write
  Field: EP6_OUT
  offset: 13, size: 1, access: read-write
  Field: EP6_IN
  offset: 12, size: 1, access: read-write
  Field: EP5_OUT
  offset: 11, size: 1, access: read-write
  Field: EP5_IN
  offset: 10, size: 1, access: read-write
  Field: EP4_OUT
  offset: 9, size: 1, access: read-write
  Field: EP4_IN
  offset: 8, size: 1, access: read-write
  Field: EP3_OUT
  offset: 7, size: 1, access: read-write
  Field: EP3_IN
  offset: 6, size: 1, access: read-write
  Field: EP2_OUT
  offset: 5, size: 1, access: read-write
  Field: EP2_IN
  offset: 4, size: 1, access: read-write
  Field: EP1_OUT
  offset: 3, size: 1, access: read-write
  Field: EP1_IN
  offset: 2, size: 1, access: read-write
  Field: EP0_OUT
  offset: 1, size: 1, access: read-write
  Field: EP0_IN
  offset: 0, size: 1, access: read-write
*/
volatile uint32_t EP_ABORT_DONE;

/** EP_STALL_ARM (offset: 0x68)
  Device: this bit must be set in conjunction with the `STALL` bit in the buffer control register to send a STALL on EP0. The device controller clears these bits when a SETUP packet is received because the USB spec requires that a STALL condition is cleared when a SETUP packet is received.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP0_OUT
  offset: 1, size: 1, access: read-write
  Field: EP0_IN
  offset: 0, size: 1, access: read-write
*/
volatile uint32_t EP_STALL_ARM;

/** NAK_POLL (offset: 0x6c)
  Used by the host controller. Sets the wait time in microseconds before trying again if the device replies with a NAK.
  access : read-write
  reset value : 0x100010
  reset mask : 0x0
  Field: DELAY_FS
  offset: 16, size: 10, access: read-write
  NAK polling interval for a full speed device
  Field: DELAY_LS
  offset: 0, size: 10, access: read-write
  NAK polling interval for a low speed device
*/
volatile uint32_t NAK_POLL;

/** EP_STATUS_STALL_NAK (offset: 0x70)
  Device: bits are set when the `IRQ_ON_NAK` or `IRQ_ON_STALL` bits are set. For EP0 this comes from `SIE_CTRL`. For all other endpoints it comes from the endpoint control register.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP15_OUT
  offset: 31, size: 1, access: read-write
  Field: EP15_IN
  offset: 30, size: 1, access: read-write
  Field: EP14_OUT
  offset: 29, size: 1, access: read-write
  Field: EP14_IN
  offset: 28, size: 1, access: read-write
  Field: EP13_OUT
  offset: 27, size: 1, access: read-write
  Field: EP13_IN
  offset: 26, size: 1, access: read-write
  Field: EP12_OUT
  offset: 25, size: 1, access: read-write
  Field: EP12_IN
  offset: 24, size: 1, access: read-write
  Field: EP11_OUT
  offset: 23, size: 1, access: read-write
  Field: EP11_IN
  offset: 22, size: 1, access: read-write
  Field: EP10_OUT
  offset: 21, size: 1, access: read-write
  Field: EP10_IN
  offset: 20, size: 1, access: read-write
  Field: EP9_OUT
  offset: 19, size: 1, access: read-write
  Field: EP9_IN
  offset: 18, size: 1, access: read-write
  Field: EP8_OUT
  offset: 17, size: 1, access: read-write
  Field: EP8_IN
  offset: 16, size: 1, access: read-write
  Field: EP7_OUT
  offset: 15, size: 1, access: read-write
  Field: EP7_IN
  offset: 14, size: 1, access: read-write
  Field: EP6_OUT
  offset: 13, size: 1, access: read-write
  Field: EP6_IN
  offset: 12, size: 1, access: read-write
  Field: EP5_OUT
  offset: 11, size: 1, access: read-write
  Field: EP5_IN
  offset: 10, size: 1, access: read-write
  Field: EP4_OUT
  offset: 9, size: 1, access: read-write
  Field: EP4_IN
  offset: 8, size: 1, access: read-write
  Field: EP3_OUT
  offset: 7, size: 1, access: read-write
  Field: EP3_IN
  offset: 6, size: 1, access: read-write
  Field: EP2_OUT
  offset: 5, size: 1, access: read-write
  Field: EP2_IN
  offset: 4, size: 1, access: read-write
  Field: EP1_OUT
  offset: 3, size: 1, access: read-write
  Field: EP1_IN
  offset: 2, size: 1, access: read-write
  Field: EP0_OUT
  offset: 1, size: 1, access: read-write
  Field: EP0_IN
  offset: 0, size: 1, access: read-write
*/
volatile uint32_t EP_STATUS_STALL_NAK;

/** USB_MUXING (offset: 0x74)
  Where to connect the USB controller. Should be to_phy by default.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: SOFTCON
  offset: 3, size: 1, access: read-write
  Field: TO_DIGITAL_PAD
  offset: 2, size: 1, access: read-write
  Field: TO_EXTPHY
  offset: 1, size: 1, access: read-write
  Field: TO_PHY
  offset: 0, size: 1, access: read-write
*/
volatile uint32_t USB_MUXING;

/** USB_PWR (offset: 0x78)
  Overrides for the power signals in the event that the VBUS signals are not hooked up to GPIO. Set the value of the override and then the override enable to switch over to the override value.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: OVERCURR_DETECT_EN
  offset: 5, size: 1, access: read-write
  Field: OVERCURR_DETECT
  offset: 4, size: 1, access: read-write
  Field: VBUS_DETECT_OVERRIDE_EN
  offset: 3, size: 1, access: read-write
  Field: VBUS_DETECT
  offset: 2, size: 1, access: read-write
  Field: VBUS_EN_OVERRIDE_EN
  offset: 1, size: 1, access: read-write
  Field: VBUS_EN
  offset: 0, size: 1, access: read-write
*/
volatile uint32_t USB_PWR;

/** USBPHY_DIRECT (offset: 0x7c)
  This register allows for direct control of the USB phy. Use in conjunction with usbphy_direct_override register to enable each override bit.
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: DM_OVV
  offset: 22, size: 1, access: read-only
  DM over voltage
  Field: DP_OVV
  offset: 21, size: 1, access: read-only
  DP over voltage
  Field: DM_OVCN
  offset: 20, size: 1, access: read-only
  DM overcurrent
  Field: DP_OVCN
  offset: 19, size: 1, access: read-only
  DP overcurrent
  Field: RX_DM
  offset: 18, size: 1, access: read-only
  DPM pin state
  Field: RX_DP
  offset: 17, size: 1, access: read-only
  DPP pin state
  Field: RX_DD
  offset: 16, size: 1, access: read-only
  Differential RX
  Field: TX_DIFFMODE
  offset: 15, size: 1, access: read-write
  TX_DIFFMODE=0: Single ended mode

 TX_DIFFMODE=1: Differential drive mode (TX_DM, TX_DM_OE ignored)
  Field: TX_FSSLEW
  offset: 14, size: 1, access: read-write
  TX_FSSLEW=0: Low speed slew rate

 TX_FSSLEW=1: Full speed slew rate
  Field: TX_PD
  offset: 13, size: 1, access: read-write
  TX power down override (if override enable is set). 1 = powered down.
  Field: RX_PD
  offset: 12, size: 1, access: read-write
  RX power down override (if override enable is set). 1 = powered down.
  Field: TX_DM
  offset: 11, size: 1, access: read-write
  Output data. TX_DIFFMODE=1, Ignored

 TX_DIFFMODE=0, Drives DPM only. TX_DM_OE=1 to enable drive. DPM=TX_DM
  Field: TX_DP
  offset: 10, size: 1, access: read-write
  Output data. If TX_DIFFMODE=1, Drives DPP/DPM diff pair. TX_DP_OE=1 to enable drive. DPP=TX_DP, DPM=~TX_DP

 If TX_DIFFMODE=0, Drives DPP only. TX_DP_OE=1 to enable drive. DPP=TX_DP
  Field: TX_DM_OE
  offset: 9, size: 1, access: read-write
  Output enable. If TX_DIFFMODE=1, Ignored.

 If TX_DIFFMODE=0, OE for DPM only. 0 - DPM in Hi-Z state 1 - DPM driving
  Field: TX_DP_OE
  offset: 8, size: 1, access: read-write
  Output enable. If TX_DIFFMODE=1, OE for DPP/DPM diff pair. 0 - DPP/DPM in Hi-Z state 1 - DPP/DPM driving

 If TX_DIFFMODE=0, OE for DPP only. 0 - DPP in Hi-Z state 1 - DPP driving
  Field: DM_PULLDN_EN
  offset: 6, size: 1, access: read-write
  DM pull down enable
  Field: DM_PULLUP_EN
  offset: 5, size: 1, access: read-write
  DM pull up enable
  Field: DM_PULLUP_HISEL
  offset: 4, size: 1, access: read-write
  Enable the second DM pull up resistor. 0 - Pull = Rpu2 1 - Pull = Rpu1 + Rpu2
  Field: DP_PULLDN_EN
  offset: 2, size: 1, access: read-write
  DP pull down enable
  Field: DP_PULLUP_EN
  offset: 1, size: 1, access: read-write
  DP pull up enable
  Field: DP_PULLUP_HISEL
  offset: 0, size: 1, access: read-write
  Enable the second DP pull up resistor. 0 - Pull = Rpu2 1 - Pull = Rpu1 + Rpu2
*/
volatile uint32_t USBPHY_DIRECT;

/** USBPHY_DIRECT_OVERRIDE (offset: 0x80)
  Override enable for each control in usbphy_direct
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: TX_DIFFMODE_OVERRIDE_EN
  offset: 15, size: 1, access: read-write
  Field: DM_PULLUP_OVERRIDE_EN
  offset: 12, size: 1, access: read-write
  Field: TX_FSSLEW_OVERRIDE_EN
  offset: 11, size: 1, access: read-write
  Field: TX_PD_OVERRIDE_EN
  offset: 10, size: 1, access: read-write
  Field: RX_PD_OVERRIDE_EN
  offset: 9, size: 1, access: read-write
  Field: TX_DM_OVERRIDE_EN
  offset: 8, size: 1, access: read-write
  Field: TX_DP_OVERRIDE_EN
  offset: 7, size: 1, access: read-write
  Field: TX_DM_OE_OVERRIDE_EN
  offset: 6, size: 1, access: read-write
  Field: TX_DP_OE_OVERRIDE_EN
  offset: 5, size: 1, access: read-write
  Field: DM_PULLDN_EN_OVERRIDE_EN
  offset: 4, size: 1, access: read-write
  Field: DP_PULLDN_EN_OVERRIDE_EN
  offset: 3, size: 1, access: read-write
  Field: DP_PULLUP_EN_OVERRIDE_EN
  offset: 2, size: 1, access: read-write
  Field: DM_PULLUP_HISEL_OVERRIDE_EN
  offset: 1, size: 1, access: read-write
  Field: DP_PULLUP_HISEL_OVERRIDE_EN
  offset: 0, size: 1, access: read-write
*/
volatile uint32_t USBPHY_DIRECT_OVERRIDE;

/** USBPHY_TRIM (offset: 0x84)
  Used to adjust trim values of USB phy pull down resistors.
  access : read-write
  reset value : 0x1F1F
  reset mask : 0x0
  Field: DM_PULLDN_TRIM
  offset: 8, size: 5, access: read-write
  Value to drive to USB PHY

 DM pulldown resistor trim control

 Experimental data suggests that the reset value will work, but this register allows adjustment if required
  Field: DP_PULLDN_TRIM
  offset: 0, size: 5, access: read-write
  Value to drive to USB PHY

 DP pulldown resistor trim control

 Experimental data suggests that the reset value will work, but this register allows adjustment if required
*/
volatile uint32_t USBPHY_TRIM;
volatile uint32_t reserved0;

/** INTR (offset: 0x8c)
  Raw Interrupts
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP_STALL_NAK
  offset: 19, size: 1, access: read-only
  Raised when any bit in EP_STATUS_STALL_NAK is set. Clear by clearing all bits in EP_STATUS_STALL_NAK.
  Field: ABORT_DONE
  offset: 18, size: 1, access: read-only
  Raised when any bit in ABORT_DONE is set. Clear by clearing all bits in ABORT_DONE.
  Field: DEV_SOF
  offset: 17, size: 1, access: read-only
  Set every time the device receives a SOF (Start of Frame) packet. Cleared by reading SOF_RD
  Field: SETUP_REQ
  offset: 16, size: 1, access: read-only
  Device. Source: SIE_STATUS.SETUP_REC
  Field: DEV_RESUME_FROM_HOST
  offset: 15, size: 1, access: read-only
  Set when the device receives a resume from the host. Cleared by writing to SIE_STATUS.RESUME
  Field: DEV_SUSPEND
  offset: 14, size: 1, access: read-only
  Set when the device suspend state changes. Cleared by writing to SIE_STATUS.SUSPENDED
  Field: DEV_CONN_DIS
  offset: 13, size: 1, access: read-only
  Set when the device connection state changes. Cleared by writing to SIE_STATUS.CONNECTED
  Field: BUS_RESET
  offset: 12, size: 1, access: read-only
  Source: SIE_STATUS.BUS_RESET
  Field: VBUS_DETECT
  offset: 11, size: 1, access: read-only
  Source: SIE_STATUS.VBUS_DETECTED
  Field: STALL
  offset: 10, size: 1, access: read-only
  Source: SIE_STATUS.STALL_REC
  Field: ERROR_CRC
  offset: 9, size: 1, access: read-only
  Source: SIE_STATUS.CRC_ERROR
  Field: ERROR_BIT_STUFF
  offset: 8, size: 1, access: read-only
  Source: SIE_STATUS.BIT_STUFF_ERROR
  Field: ERROR_RX_OVERFLOW
  offset: 7, size: 1, access: read-only
  Source: SIE_STATUS.RX_OVERFLOW
  Field: ERROR_RX_TIMEOUT
  offset: 6, size: 1, access: read-only
  Source: SIE_STATUS.RX_TIMEOUT
  Field: ERROR_DATA_SEQ
  offset: 5, size: 1, access: read-only
  Source: SIE_STATUS.DATA_SEQ_ERROR
  Field: BUFF_STATUS
  offset: 4, size: 1, access: read-only
  Raised when any bit in BUFF_STATUS is set. Clear by clearing all bits in BUFF_STATUS.
  Field: TRANS_COMPLETE
  offset: 3, size: 1, access: read-only
  Raised every time SIE_STATUS.TRANS_COMPLETE is set. Clear by writing to this bit.
  Field: HOST_SOF
  offset: 2, size: 1, access: read-only
  Host: raised every time the host sends a SOF (Start of Frame). Cleared by reading SOF_RD
  Field: HOST_RESUME
  offset: 1, size: 1, access: read-only
  Host: raised when a device wakes up the host. Cleared by writing to SIE_STATUS.RESUME
  Field: HOST_CONN_DIS
  offset: 0, size: 1, access: read-only
  Host: raised when a device is connected or disconnected (i.e. when SIE_STATUS.SPEED changes). Cleared by writing to SIE_STATUS.SPEED
*/
volatile uint32_t INTR;

/** INTE (offset: 0x90)
  Interrupt Enable
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP_STALL_NAK
  offset: 19, size: 1, access: read-write
  Raised when any bit in EP_STATUS_STALL_NAK is set. Clear by clearing all bits in EP_STATUS_STALL_NAK.
  Field: ABORT_DONE
  offset: 18, size: 1, access: read-write
  Raised when any bit in ABORT_DONE is set. Clear by clearing all bits in ABORT_DONE.
  Field: DEV_SOF
  offset: 17, size: 1, access: read-write
  Set every time the device receives a SOF (Start of Frame) packet. Cleared by reading SOF_RD
  Field: SETUP_REQ
  offset: 16, size: 1, access: read-write
  Device. Source: SIE_STATUS.SETUP_REC
  Field: DEV_RESUME_FROM_HOST
  offset: 15, size: 1, access: read-write
  Set when the device receives a resume from the host. Cleared by writing to SIE_STATUS.RESUME
  Field: DEV_SUSPEND
  offset: 14, size: 1, access: read-write
  Set when the device suspend state changes. Cleared by writing to SIE_STATUS.SUSPENDED
  Field: DEV_CONN_DIS
  offset: 13, size: 1, access: read-write
  Set when the device connection state changes. Cleared by writing to SIE_STATUS.CONNECTED
  Field: BUS_RESET
  offset: 12, size: 1, access: read-write
  Source: SIE_STATUS.BUS_RESET
  Field: VBUS_DETECT
  offset: 11, size: 1, access: read-write
  Source: SIE_STATUS.VBUS_DETECTED
  Field: STALL
  offset: 10, size: 1, access: read-write
  Source: SIE_STATUS.STALL_REC
  Field: ERROR_CRC
  offset: 9, size: 1, access: read-write
  Source: SIE_STATUS.CRC_ERROR
  Field: ERROR_BIT_STUFF
  offset: 8, size: 1, access: read-write
  Source: SIE_STATUS.BIT_STUFF_ERROR
  Field: ERROR_RX_OVERFLOW
  offset: 7, size: 1, access: read-write
  Source: SIE_STATUS.RX_OVERFLOW
  Field: ERROR_RX_TIMEOUT
  offset: 6, size: 1, access: read-write
  Source: SIE_STATUS.RX_TIMEOUT
  Field: ERROR_DATA_SEQ
  offset: 5, size: 1, access: read-write
  Source: SIE_STATUS.DATA_SEQ_ERROR
  Field: BUFF_STATUS
  offset: 4, size: 1, access: read-write
  Raised when any bit in BUFF_STATUS is set. Clear by clearing all bits in BUFF_STATUS.
  Field: TRANS_COMPLETE
  offset: 3, size: 1, access: read-write
  Raised every time SIE_STATUS.TRANS_COMPLETE is set. Clear by writing to this bit.
  Field: HOST_SOF
  offset: 2, size: 1, access: read-write
  Host: raised every time the host sends a SOF (Start of Frame). Cleared by reading SOF_RD
  Field: HOST_RESUME
  offset: 1, size: 1, access: read-write
  Host: raised when a device wakes up the host. Cleared by writing to SIE_STATUS.RESUME
  Field: HOST_CONN_DIS
  offset: 0, size: 1, access: read-write
  Host: raised when a device is connected or disconnected (i.e. when SIE_STATUS.SPEED changes). Cleared by writing to SIE_STATUS.SPEED
*/
volatile uint32_t INTE;

/** INTF (offset: 0x94)
  Interrupt Force
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP_STALL_NAK
  offset: 19, size: 1, access: read-write
  Raised when any bit in EP_STATUS_STALL_NAK is set. Clear by clearing all bits in EP_STATUS_STALL_NAK.
  Field: ABORT_DONE
  offset: 18, size: 1, access: read-write
  Raised when any bit in ABORT_DONE is set. Clear by clearing all bits in ABORT_DONE.
  Field: DEV_SOF
  offset: 17, size: 1, access: read-write
  Set every time the device receives a SOF (Start of Frame) packet. Cleared by reading SOF_RD
  Field: SETUP_REQ
  offset: 16, size: 1, access: read-write
  Device. Source: SIE_STATUS.SETUP_REC
  Field: DEV_RESUME_FROM_HOST
  offset: 15, size: 1, access: read-write
  Set when the device receives a resume from the host. Cleared by writing to SIE_STATUS.RESUME
  Field: DEV_SUSPEND
  offset: 14, size: 1, access: read-write
  Set when the device suspend state changes. Cleared by writing to SIE_STATUS.SUSPENDED
  Field: DEV_CONN_DIS
  offset: 13, size: 1, access: read-write
  Set when the device connection state changes. Cleared by writing to SIE_STATUS.CONNECTED
  Field: BUS_RESET
  offset: 12, size: 1, access: read-write
  Source: SIE_STATUS.BUS_RESET
  Field: VBUS_DETECT
  offset: 11, size: 1, access: read-write
  Source: SIE_STATUS.VBUS_DETECTED
  Field: STALL
  offset: 10, size: 1, access: read-write
  Source: SIE_STATUS.STALL_REC
  Field: ERROR_CRC
  offset: 9, size: 1, access: read-write
  Source: SIE_STATUS.CRC_ERROR
  Field: ERROR_BIT_STUFF
  offset: 8, size: 1, access: read-write
  Source: SIE_STATUS.BIT_STUFF_ERROR
  Field: ERROR_RX_OVERFLOW
  offset: 7, size: 1, access: read-write
  Source: SIE_STATUS.RX_OVERFLOW
  Field: ERROR_RX_TIMEOUT
  offset: 6, size: 1, access: read-write
  Source: SIE_STATUS.RX_TIMEOUT
  Field: ERROR_DATA_SEQ
  offset: 5, size: 1, access: read-write
  Source: SIE_STATUS.DATA_SEQ_ERROR
  Field: BUFF_STATUS
  offset: 4, size: 1, access: read-write
  Raised when any bit in BUFF_STATUS is set. Clear by clearing all bits in BUFF_STATUS.
  Field: TRANS_COMPLETE
  offset: 3, size: 1, access: read-write
  Raised every time SIE_STATUS.TRANS_COMPLETE is set. Clear by writing to this bit.
  Field: HOST_SOF
  offset: 2, size: 1, access: read-write
  Host: raised every time the host sends a SOF (Start of Frame). Cleared by reading SOF_RD
  Field: HOST_RESUME
  offset: 1, size: 1, access: read-write
  Host: raised when a device wakes up the host. Cleared by writing to SIE_STATUS.RESUME
  Field: HOST_CONN_DIS
  offset: 0, size: 1, access: read-write
  Host: raised when a device is connected or disconnected (i.e. when SIE_STATUS.SPEED changes). Cleared by writing to SIE_STATUS.SPEED
*/
volatile uint32_t INTF;

/** INTS (offset: 0x98)
  Interrupt status after masking &amp; forcing
  access : read-write
  reset value : 0x0
  reset mask : 0x0
  Field: EP_STALL_NAK
  offset: 19, size: 1, access: read-only
  Raised when any bit in EP_STATUS_STALL_NAK is set. Clear by clearing all bits in EP_STATUS_STALL_NAK.
  Field: ABORT_DONE
  offset: 18, size: 1, access: read-only
  Raised when any bit in ABORT_DONE is set. Clear by clearing all bits in ABORT_DONE.
  Field: DEV_SOF
  offset: 17, size: 1, access: read-only
  Set every time the device receives a SOF (Start of Frame) packet. Cleared by reading SOF_RD
  Field: SETUP_REQ
  offset: 16, size: 1, access: read-only
  Device. Source: SIE_STATUS.SETUP_REC
  Field: DEV_RESUME_FROM_HOST
  offset: 15, size: 1, access: read-only
  Set when the device receives a resume from the host. Cleared by writing to SIE_STATUS.RESUME
  Field: DEV_SUSPEND
  offset: 14, size: 1, access: read-only
  Set when the device suspend state changes. Cleared by writing to SIE_STATUS.SUSPENDED
  Field: DEV_CONN_DIS
  offset: 13, size: 1, access: read-only
  Set when the device connection state changes. Cleared by writing to SIE_STATUS.CONNECTED
  Field: BUS_RESET
  offset: 12, size: 1, access: read-only
  Source: SIE_STATUS.BUS_RESET
  Field: VBUS_DETECT
  offset: 11, size: 1, access: read-only
  Source: SIE_STATUS.VBUS_DETECTED
  Field: STALL
  offset: 10, size: 1, access: read-only
  Source: SIE_STATUS.STALL_REC
  Field: ERROR_CRC
  offset: 9, size: 1, access: read-only
  Source: SIE_STATUS.CRC_ERROR
  Field: ERROR_BIT_STUFF
  offset: 8, size: 1, access: read-only
  Source: SIE_STATUS.BIT_STUFF_ERROR
  Field: ERROR_RX_OVERFLOW
  offset: 7, size: 1, access: read-only
  Source: SIE_STATUS.RX_OVERFLOW
  Field: ERROR_RX_TIMEOUT
  offset: 6, size: 1, access: read-only
  Source: SIE_STATUS.RX_TIMEOUT
  Field: ERROR_DATA_SEQ
  offset: 5, size: 1, access: read-only
  Source: SIE_STATUS.DATA_SEQ_ERROR
  Field: BUFF_STATUS
  offset: 4, size: 1, access: read-only
  Raised when any bit in BUFF_STATUS is set. Clear by clearing all bits in BUFF_STATUS.
  Field: TRANS_COMPLETE
  offset: 3, size: 1, access: read-only
  Raised every time SIE_STATUS.TRANS_COMPLETE is set. Clear by writing to this bit.
  Field: HOST_SOF
  offset: 2, size: 1, access: read-only
  Host: raised every time the host sends a SOF (Start of Frame). Cleared by reading SOF_RD
  Field: HOST_RESUME
  offset: 1, size: 1, access: read-only
  Host: raised when a device wakes up the host. Cleared by writing to SIE_STATUS.RESUME
  Field: HOST_CONN_DIS
  offset: 0, size: 1, access: read-only
  Host: raised when a device is connected or disconnected (i.e. when SIE_STATUS.SPEED changes). Cleared by writing to SIE_STATUS.SPEED
*/
volatile uint32_t INTS;
} USBCTRL_REGS_type;

#define USBCTRL_REGS ((USBCTRL_REGS_type *) 0x50110000)

#endif // HW_USBCTRL_REGS_H
