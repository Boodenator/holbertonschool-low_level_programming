#include <stdio.h>

/**
 * pre_main - print before the main function
 *
 **/

void __attribute__((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
