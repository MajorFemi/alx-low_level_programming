#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description: start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a = 0;
	int f = 0, e = 0, m = 0, i = 0;

	while (a < 1440)
	{
		_putchar(f + '0');
		_putchar(e + '0');
		_putchar(':');
		_putchar(m + '0');
		_putchar(i + '0');
		_putchar('\n');

		i++;
		if (i > 9)
		{
			i = 0;
			m++;
		}
		if (m > 5)
		{
			m = 0;
			e++;
		}
		if (e > 9)
		{
			e = 0;
			f++;
		}
		a++;
	}
}

