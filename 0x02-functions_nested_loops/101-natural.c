#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - main body or Entry point
 * Description: Print the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int f = 1;
	int total = 0;

	while (f < 1024)
	{
		if (f % 3 == 0)
			total += f;
		else if (f % 5 == 0)
			total += f;

		f++;
	}
	printf("%d\n", total);

	return (0);
}
