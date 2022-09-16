#include "main.h"

/**
 * print_most_numbers - prints the number from 0 to 9, except 2 and 4
 * Description: can only use _putchar twice
 */

void print_most_numbers(void)
{
	int f;

	f = 0

	while (f < 10)
	{
		if (f != '2' && f != '4')
		{
			_putchar(f + '0');
		}
		f++;
	}
	_putchar('\n');
}



