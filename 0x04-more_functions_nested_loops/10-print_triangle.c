#include "main.h"

/**
 * print_triangle - prints a triangle
 * Description: use only _putchar to print
 * use character # to print the triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int f, e, m;

	f = 0;
	e = size - 1;
	while (f < size)
	{
		e = size - 1 - f;
		m = f + 1;
		while (f > 0)
		{
			_putchar(' ');
			f--;
		}
		while (m > 0)
		{
			_putchar('#');
			m--;
		}
		_putchar('\n');
		f++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
