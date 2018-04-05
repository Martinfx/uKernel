/* $Id$ */
/* Copyright (c) 2018 Pierre Pronchery <khorben@defora.org> */
/* This file is part of DeforaOS uKernel */



/* check for supported architectures */
#if defined(__amd64__) || defined(__i386__)
# include "arch/i386/kernel.S"
#else
# warning Unsupported architecture
#endif