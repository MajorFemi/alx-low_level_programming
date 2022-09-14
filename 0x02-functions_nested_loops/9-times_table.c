#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: tablr show start from 0
 *
 * Return: 0
 */
void times_table(void)
{
	int f = 0;
	int e;
	int m;

	while (f < 10)
	{
		e = 0;
		while (e < 10)
		{
			m = f * e;

			if (m > 9)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else if (e != 0)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar(m + '0');
			}

			if (e != 9)
			{
				_putchar(44);
				_putchar(' ');
			}
			e++;
		}
		_putchar('\n');
		f++;
	}
}
