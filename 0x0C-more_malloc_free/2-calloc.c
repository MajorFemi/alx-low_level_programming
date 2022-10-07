#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if fails, else pointer to alloc memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *f;
	char *e;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	f = malloc(size * nmemb);

	if (f == NULL)
		return (NULL);

	e = f;

	for (m = 0; m < (size * nmemb); m++)
		e[m] = '\0';

	return (f);
}
