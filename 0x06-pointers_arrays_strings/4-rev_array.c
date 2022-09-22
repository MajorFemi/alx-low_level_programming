#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: pointer as array
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n);
{
	int l = 0;
	int fem;

	while (l < n--)
	{
		fem = a[l];
		a[l++] = a[n];
		a[n] = fem;
	}
}

