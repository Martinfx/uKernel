/* $Id$ */
/* Copyright (c) 2018-2019 Pierre Pronchery <khorben@defora.org> */
/* This file is part of DeforaOS uKernel */



#include <stdio.h>
#include <time.h>
#include <errno.h>


/* public */
/* functions */
/* main */
int main(int argc, char * argv[], char * envp[], void * auxv)
{
	int i;
	time_t t;

	puts("Starting DeforaOS...");
	printf("Command line:");
	for(i = 0; i < argc; i++)
		printf(" \"%s\"", argv[i]);
	printf("\n");
#ifdef DEBUG
	if(argv[i] != NULL)
		puts("uKernel: argv is not terminated properly");
#endif
	if(envp != NULL)
	{
		printf("Environment:\n");
		for(i = 0; envp[i] != NULL; i++)
			printf("%s\n", envp[i]);
	}
	printf("Auxiliary vector: %p\n", auxv);
	if((t = time(NULL)) == -1)
		printf("Could not get the current time (%d)\n", errno);
	else
		printf("Time: %lu\n", t);
	return 0;
}
