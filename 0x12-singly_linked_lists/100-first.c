#include <stdio.h>

/* Using Constructors in c */

/**
 * before_main - print statement within this function before running main
 */

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
