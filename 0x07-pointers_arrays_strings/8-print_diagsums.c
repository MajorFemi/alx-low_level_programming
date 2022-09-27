#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 *
 * @a: 2d array of int types
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int f, sum, sizer;

	f = 0;
	sum = 0;
	sizer = size * size;

	while (f < sizer)
	{
		if (f % (size + 1) == 0)
		{
			sum += a[f];
		}
		f++;
	}
	printf("%d, ", sum);

	sum = 0;
	f = 0;
	while (f < sizer)
	{
		if (f % (size - 1) == 0 && f != (sizer - 1) && f != 0)
		{
			sum += a[f];
		}
		f++;
	}
	printf("%d\n", sum);
}
