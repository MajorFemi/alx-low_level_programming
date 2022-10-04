#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char
 * to be initialized with specific char
 * @size: size of array
 * @c: specific char
 * Return: Null if size is 0
 * pointer to array or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *f;
	unsigned int m;

	if (size == 0)
	{
		return (NULL);
	}

	f = malloc(size * sizeof(*f));
	if (f == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < size; m++)
	{
		f[m] = c;
	}

	return (f);
}
