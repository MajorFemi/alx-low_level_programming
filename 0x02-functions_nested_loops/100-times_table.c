#include "main.h"
/**
 * print_times_table - print the 'n' times table, starting with 0
 * Description: If 'n' is greater than 15 or less than 0, print nothing
 * @n: int type number
 */
void print_times_table(int n)
{
	int f = 0, e, z;

	if (n > 15 || n < 0)
		return;
	while (f <= n)
	{
		for (e = 0; e <= n; e++)
		{
			m = f * e;
			if (m > 99)
			{
				_putchar(m / 100 + '0');
				_putchar((m / 10 % 10) + '0');
				_putchar(m % 10 + '0');
			}
			else if (m > 9)
			{
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else if (e != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else
				_putchar(m + '0');

			if (e != n)
			{
				_putchar(44);
				_putchar(' ');
			}
		}
		_putchar('\n');
		f++;
	}
}
