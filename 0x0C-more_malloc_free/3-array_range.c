#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers from min to max
 * @min: first array value
 * @max: last array value
 *
 * Return: NULL, if min > max or mallocs fails else pointer to array
 */

int *array_range(int min, int max)
{
	int *array, f, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (f = 0; f < size; f++)
		array[f] = min++;

	return (array);
}
