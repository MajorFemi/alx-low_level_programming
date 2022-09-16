#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main body or Entry point
 *
 * Description: finds and pritns the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	int f;
	long digits = 612852475143;

	for (f = (int) sqrt(num); f > 2; f++)
	{
		if (digits % f == 0)
		{
			printf("%d\n", f);
			break;
		}
	}

	return (0);
}
