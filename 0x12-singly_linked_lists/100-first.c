#include <stdio.h>

/* Using Constructors in c */

void main_constructor(void) __attribut__((constructor));
/**
 * main_constructor - constructor function that print messsage before
 * main runs
 * Return: void
 */

void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon mu back!\n");
}
