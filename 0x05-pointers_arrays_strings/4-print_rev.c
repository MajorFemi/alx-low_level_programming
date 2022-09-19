#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: char type as pointer
 */

void print_rev(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
		f++;
	}
	f--;

	while (f >= 0)
	{
		_putchar(s[f]);
		f--;
	}
	_putchar('\n')
}
