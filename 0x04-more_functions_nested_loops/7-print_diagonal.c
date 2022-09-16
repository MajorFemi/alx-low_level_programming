#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * Description: use _putchar to print
 * @n: int type number
 * Return: if n is 0 or less print \n
 */

void print_diagonal(int n)
{
	int f, m;

	f = 0;

	while (n > 0)
	{
		m = f;
		while (m > 0)
		{
			_putchar(32);
			m--;
		}
		_putchar('\\');
		_putchar('\n');
		f++;
		n--;
	}
	if (f < 1)
	{
		_putchar('\n');
	}
}
