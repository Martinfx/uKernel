/* $Id$ */
/* Copyright (c) 2018 Pierre Pronchery <khorben@defora.org> */
/* This file is part of DeforaOS uKernel */



#ifndef UKERNEL_DRIVERS_CONSOLE_H
# define UKERNEL_DRIVERS_CONSOLE_H

# include <stdint.h>
# include "bus.h"


/* public */
/* types */
typedef struct _ukConsole ukConsole;

typedef enum _ukConsoleMode
{
	CONSOLE_MODE_TEXT = 0,
	CONSOLE_MODE_GRAPHICS
} ukConsoleMode;

typedef struct _ukConsoleData ukConsoleData;

struct _ukConsole
{
	char name[16];

	ukConsole * (*init)(ukBus * bus);
	void (*destroy)(ukConsole * console);

	int (*set_mode)(ukConsole * console, ukConsoleMode mode,
			unsigned int width, unsigned int height,
			unsigned int depth);

	void (*clear)(ukConsole * console);

	void (*print)(ukConsole * console, char const * str, size_t len);

	ukConsoleData * data;
};


/* prototypes */
ukConsole * console_init(ukBus * bus, char const * name);
void console_destroy(ukConsole * console);

/* accessors */
ukConsole * console_get_default(void);

int console_set_mode(ukConsole * console, ukConsoleMode mode,
		unsigned int width, unsigned int height, unsigned int depth);

/* helpers */
void console_clear(ukConsole * console);

void console_print(ukConsole * console, char const * str, size_t len);

#endif /* !UKERNEL_DRIVERS_CONSOLE_H */
