/* $Id$ */
/* Copyright (c) 2018 Pierre Pronchery <khorben@defora.org> */
/* This file is part of DeforaOS uKernel */



#include "drivers/console.h"


/* public */
/* functions */
/* main */
int main(void)
{
	console_init();
	return 0;
}
