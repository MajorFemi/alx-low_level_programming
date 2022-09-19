#include "main.h"

/**
 * _puts - prints a string.
 *
 * @str: character type as pointer
 */

void _puts(char *str)
{
	int f = 0;

	while (str[f] != '\0')
	{
		_putchar(str[f]);
		f++;
	}
	_putchar('\n');
}
