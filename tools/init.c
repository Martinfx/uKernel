/* $Id$ */
/* Copyright (c) 2018 Pierre Pronchery <khorben@defora.org> */
/* This file is part of DeforaOS uKernel */



#include <stddef.h>
#include "drivers/bus.h"
#include "drivers/console.h"

#define TOOLS_BUS	"tty"
#define TOOLS_CONSOLE	"stdio"


int _init(void)
{
	ukBus * bus;

	bus = bus_init(NULL, TOOLS_BUS);
	console_init(bus, TOOLS_CONSOLE);
	return 0;
}
