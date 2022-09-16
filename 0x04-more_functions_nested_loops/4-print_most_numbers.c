#include "main.h"

/**
 * print_most_numbers - prints the number from 0 to 9, except 2 and 4
 * Description: can only use _putchar twice
 * Return: void
 */

void print_most_numbers(void)
{
	int f;

	for (f = 0; f < 10; f++)
	{
		if (f != 2 && f != 4)
		{
			_putchar(f + '0');
		}
	}
	_putchar('\n');
}
