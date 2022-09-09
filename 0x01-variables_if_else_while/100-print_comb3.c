#include <stdio.h>
#include <stdlib.h>
/**
 * main - main body or Entry points
 *
 * Description: Prints all possible different combinations of two digits
 * Numbers should be seperated by comma
 * The two digits must be different
 * 10 and 01 are considered the same combination of two digits
 * can only use putchar function; maximum five times
 * can not use variable of type char
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3;

	num1 = 0;

	while (num1 < 100)
	{
		num2 = num1 % 10;
		num3 = num1 / 10;

		if (num3 < num2)
		{
			putchar(num3 + '0');
			putchar(num2 + '0');

			if (num1 < 89)
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
