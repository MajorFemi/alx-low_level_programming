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
	unsigned int f, e, sum;

	if (n < 0)
	{
		_putchar(45);
		f = n * -1;
	}
	else
	{
		f = n;
	}

	
	e = f;
	sum = 1;

	while (e > 9)
	{
		e /= 10;
		sum *= 10;
	}

	for (; sum >= 1; sum /= 10)
	{
		_putchar(((f / sum) % 10) + '0');
	}
}
