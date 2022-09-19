#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: char type as pointer
 */

void puts2(char *str)
{
	int f;

	f = 0;

	while (str[f] != '\0')
	{
		if (f % 2 == 0)
			_putchar(str[f]);
		f++;
	}
	_putchar('\n');
}
