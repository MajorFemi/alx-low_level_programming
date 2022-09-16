#include "main.h"

/**
 * print_square - prints a square
 * Description: can only use _putchar function to print
 * @size: size of the square
 * Return: if size is 0 or less print new line
 */

void print_square(int size)
{
	int f, m;

	m = 0;

	if (size < 1)
	{
		_putchar('\n');
	}
	while (m < size)
	{
		f = 0;
		while (f < size)
		{
			_putchar('#');
			f++;
		}
		_putchar('\n');
		m++;
	}
}
