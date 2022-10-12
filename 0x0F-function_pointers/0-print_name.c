#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: char string
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(*f)(name);
}
