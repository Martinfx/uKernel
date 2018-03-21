/* $Id$ */
/* Copyright (c) 2018 Pierre Pronchery <khorben@defora.org> */
/* This file is part of DeforaOS uKernel */



#ifndef UKERNEL_DRIVERS_CONSOLE_VGA_H
# define UKERNEL_DRIVERS_CONSOLE_VGA_H


/* constants */
#define VGA_ADDRESS_BASE		0xb8000

#define VGA_TEXT_COLUMNS		80
#define VGA_TEXT_ROWS			25

#define VGA_TEXT_COLOR_BLACK		0x00
#define VGA_TEXT_COLOR_BLUE		0x01
#define VGA_TEXT_COLOR_GREEN		0x02
#define VGA_TEXT_COLOR_CYAN		0x03
#define VGA_TEXT_COLOR_RED		0x04
#define VGA_TEXT_COLOR_MAGENTA		0x05
#define VGA_TEXT_COLOR_BROWN		0x06
#define VGA_TEXT_COLOR_LIGHT_GREY	0x07
#define VGA_TEXT_COLOR_DARK_GREY	0x08
#define VGA_TEXT_COLOR_LIGHT_BLUE	0x09
#define VGA_TEXT_COLOR_LIGHT_GREEN	0x0a
#define VGA_TEXT_COLOR_LIGHT_CYAN	0x0b
#define VGA_TEXT_COLOR_LIGHT_RED	0x0c
#define VGA_TEXT_COLOR_LIGHT_MAGENTA	0x0d
#define VGA_TEXT_COLOR_LIGHT_BROWN	0x0e
#define VGA_TEXT_COLOR_WHITE		0x0f

#endif /* !UKERNEL_DRIVERS_CONSOLE_VGA_H */
