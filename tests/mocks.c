#include "mocks.h"


uint8_t recv_buf[RECEIVE_BUFFER_SIZE];
uint8_t send_buf[SEND_BUFFER_SIZE];
uint32_t recv_read_pos;
uint32_t recv_write_pos;
uint32_t send_read_pos;
uint32_t send_write_pos;
bool echo_enabled;

void mock_tick(void)
{
    // nothing to do
}

bool mock_echo(void)
{
    return echo_enabled;
}

uint32_t mock_send_bytes(uint8_t *data, uint32_t length)
{
    uint32_t i;
    for (i = 0; i < length; i++) {
        uint32_t next_write = send_write_pos;
        next_write++;
        if (SEND_BUFFER_SIZE <= next_write) {
            next_write = 0;
        }
        if (next_write != send_read_pos) {
            send_buf[send_write_pos] = data[i];
            send_write_pos = next_write;
        } else {
            // buffer is full
            break;
        }
    }
    return i;
}

void mock_send_String(char* str)
{
    while(*str != 0) {
        uint32_t next_write = send_write_pos;
        next_write++;
        if (SEND_BUFFER_SIZE <= next_write) {
            next_write = 0;
        }
        if (next_write != send_read_pos) {
            send_buf[send_write_pos] = *str;
            str++;
            send_write_pos = next_write;
        } else {
            // buffer is full
            break;
        }
    }
}

uint8_t mock_get_next_received_byte(void) {
    uint8_t res;
    if (recv_read_pos == recv_write_pos) {
        // buffer empty
        return 0;
    }
    res = recv_buf[recv_read_pos];
    recv_read_pos++;
    if (RECEIVE_BUFFER_SIZE == recv_read_pos) {
        recv_read_pos = 0;
    }
    return res;
}

uint32_t mock_get_num_received_bytes(void)
{
    if (recv_read_pos == recv_write_pos) {
        // buffer empty
        return 0;
    }
    if (recv_read_pos < recv_write_pos) {
        return recv_write_pos - recv_read_pos;
    } else {
        // wrap around
        return (RECEIVE_BUFFER_SIZE - recv_read_pos) + recv_write_pos;
    }
}

bool mock_get_received_bytes(uint8_t *buf, uint32_t length)
{
    uint32_t i;
    if (length < mock_get_num_received_bytes()) {
        return false;
    }
    for (i = 0; i < length; i++) {
        buf[i] = mock_get_next_received_byte();
    }
    return true;
}

void send_bytes_to_cli(uint8_t *buf, uint32_t length)
{
    uint32_t i;
    for (i = 0; i < length; i++) {
        uint32_t next_write = recv_write_pos;
        next_write++;
        if (SEND_BUFFER_SIZE <= next_write) {
            next_write = 0;
        }
        if (next_write != recv_read_pos) {
            recv_buf[recv_write_pos] = buf[i];
            recv_write_pos = next_write;
        } else {
            // buffer is full
            break;
        }
    }
}

void debug_putc(void* p, char c)
{
    (void) p; // not used
    mock_send_bytes((uint8_t *)&c, 1);
}


