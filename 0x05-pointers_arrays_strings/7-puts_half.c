#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: char type as pointers
 */

void puts_half(char *str)
{
	int length, f, e;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (e = length / 2; str[e] != '\0'; e++)
		{
			_putchar(str[e]);
		}
	}
	else if (len % 2)
	{
		for (f = (length - 1) / 2 ; f < length - 1; f++)
		{
			_putchar(str[f + 1]);
		}
	}
	_putchar('\n');
}
