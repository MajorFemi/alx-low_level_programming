#include "main.h"

/**
 * print_number - prints an integer
 * Description: can only use _putchar to print
 * @n: int type number
 */

void print_number(int n)
{
	unsigned int f;

	if (n < 0)
	{
		f = -n;
		_putchar(45);
	}
	else
	{
		f = n:
	}

	if (f / 10)
	{
		print_number(f / 10);
	}

	_putchar((f % 10) + '0');
}
