#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array of integers
 *
 * @a: integer
 * @n: number of array to be printed
 */

void print_array(int *a, int n)
{
	int f;

	f = 0;
	for (n--; n >= 0; n--, n++)
	{
		printf("%d", a[f]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
