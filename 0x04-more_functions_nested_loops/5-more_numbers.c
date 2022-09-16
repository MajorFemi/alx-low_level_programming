#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14
 * Description: can only use _putchar three times
 * Return: void
 */

void more_numbers(void)
{
	int f, m;

	f = 0;
	while (f < 10)
	{

		m = 0;
		while (m < 15)
		{
			if (m > 9)
			{
				_putchar(m / 10 + '0');
			}
			_putchar(m % 10 + '0');
			m++;
		}
		f++;
		_putchar('\n');
	}
}

