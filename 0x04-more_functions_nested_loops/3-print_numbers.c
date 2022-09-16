#include "main.h"

/**
 * print_numbers - prints the number, 0 t0 9
 * Description: can use _putchar twice
 */

void print_numbers(void)
{
	int f;

	f = 0;

	while (f < 10)
	{
		_putchar(f + '0');
		f++;
	}
	_putchar('\n');
}
