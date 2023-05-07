#ifndef CLI_CLI_CFG_H_
#define CLI_CLI_CFG_H_

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include "hal/console_uart.h"

#define SERIAL_SEND_BYTES             console_uart_send_bytes
#define SERIAL_SEND_STRING            console_uart_send_String
#define SERIAL_NUM_RECEIVED_BYTES     console_uart_get_num_received_bytes
#define SERIAL_GET_RECEIVED_BYTES     console_uart_get_received_bytes
#define SERIAL_GET_NEXT_RECEIVED_BYTE console_uart_get_next_received_byte

#define MAX_LINE_LENGTH   100
#define MAX_PARAMETERS    10
#define ECHO_ENABLED      true

#define PROMPT "\r\n $ "
#define WELCOME "\r\nMBSP Command Line Interface\r\n"
#define ERROR_LINE_TOO_LONG "\r\n The command is too long! please try again!\r\n"


typedef bool (*cmd_func_typ)(void);

typedef struct {
    char name[10];
    char help[100];
    cmd_func_typ func;
}cmd;

cmd commands[] = {
        {"time", "time since power on", NULL},
        {"test", "test command", NULL},
};


#endif /* CLI_CLI_CFG_H_ */
