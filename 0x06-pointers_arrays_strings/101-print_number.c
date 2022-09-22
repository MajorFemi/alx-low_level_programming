#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: int type
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int f;

	f = n;

	if (n < 0)
	{
		_putchar(45);
		f = -n;
	}

	if (f / 10 != 0)
	{
		print_number(f / 10);
	}
	_putchar((f % 10) + '0');
}
