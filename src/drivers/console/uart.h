/* $Id$ */
/* Copyright (c) 2018 Pierre Pronchery <khorben@defora.org> */
/* This file is part of DeforaOS uKernel */



#ifndef UKERNEL_DRIVERS_CONSOLE_UART_H
# define UKERNEL_DRIVERS_CONSOLE_UART_H


/* constants */
# define UART_ADDRESS_BASE_COM0		0x3f8
# define UART_ADDRESS_BASE_COM1		0x2f8

# define UART_REGISTER_DATA		0x0
# define UART_REGISTER_INTERRUPT_ENABLE	0x1
# define UART_REGISTER_FIFO_CONTROL	0x2
# define UART_REGISTER_LINE_CONTROL	0x3
# define UART_REGISTER_MODEM_CONTROL	0x4
# define UART_REGISTER_LINE_STATUS	0x5
# define UART_REGISTER_MODEM_STATUS	0x6

#endif /* !UKERNEL_DRIVERS_CONSOLE_UART_H */
