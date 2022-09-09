#include <stdio.h>
#include <stdlib.h>
/**
 * main - main body or Entry points
 *
 * Description: Prints all possible different combinations of three digits
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Print only the smallest combination of three digits
 * can only use putchar function; maximum six times
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3, num4;

	num1 = 0;

	while (num1 < 1000)
	{
		num2 = num1 / 100;
		num3 = (num1 / 10) % 10;
		num4 = num1 % 10;

		if (num2 < num3 && num3 < num4)
		{
			putchar(num2 + '0');
			putchar(num3 + '0');
			putchar(num4 + '0');

			if (num1 < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
