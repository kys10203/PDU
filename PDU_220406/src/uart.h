#ifndef UART_H_
#define UART_H_

#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

class CUartIO{

public:
	const char *portname = "/dev/ttymxc2";
	int uartFd = -1;

public:
	int set_interface_attribs (int fd, int speed, int parity);
	void set_blocking (int fd, int should_block);
	void uart_writestr(const char* string) ;
	void uart_write(void* data, size_t len);
	ssize_t uart_read(void* buffer, size_t charsToRead);
	int uart_open(const char* port, int baud, int blocking);

};

#endif /* UART_H_ */
