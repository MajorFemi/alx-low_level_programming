#include <stdio.h>
#include <math.h>

/**
 * main - main body or Entry point
 *
 * Description: finds and prints the largest prime factor
 *612852475143
 * Return: 0
 */

int main(void)
{
	int f;

	long digits = 612852475143;

	for (f = (int) sqrt(digits); f > 2; f++)
	{
		if (digits % f == 0)
		{
			printf("%d\n", f);
			break;
		}
	}

	return (0);
}
