#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: input array
 * @size: number of elements
 * @action: action to be exectured on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array++));
}
