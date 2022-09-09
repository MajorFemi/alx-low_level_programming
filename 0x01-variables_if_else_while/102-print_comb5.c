#include <stdio.h>
#include <stdlib.h>
/**
 * main - main body or Entry points
 *
 * Description: Prints all possible combinaion of two two-digit numbers
 * Numbers should range from 0 to 99
 * combination of numbers should be separated by space and in ascending number
 * 00 01 and 01 0 are considered same of numbers 0 and 1
 * can only use putchar function; maximum eight times
 *
 * Return: 0
 */
int main(void)
{
	int x, y;
	int l, m, n, o;

	x = 0;

	while (x < 100)
	{
		l = x / 10;
		m = x % 10;

		y = 0;
		while (y < 100)
		{
			n = y / 10;
			o = y % 10;

			if (l < n || (l == n && m < o))
			{
				putchar(l + '0');
				putchar(m + '0');
				putchar(32);
				putchar(n + '0');
				putchar(o + '0');

				if (!(l == 9 && m == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
