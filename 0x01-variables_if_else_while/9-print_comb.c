#include <stdio.h>
#include <stdlib.h>
/**
 * main - main body or Entry points
 *
 * Description: Prints all possible combination of single digit number
 * Numbers should be printed in ascending order
 * can only use putchar function; four times
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');

	return (0);
}
