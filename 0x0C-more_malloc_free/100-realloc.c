#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the preious memory
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes for new memory
 * Return: ptr if new_size == oldsize, NULL if new_size = 0 and ptrs is not
 * else pointer to the reallocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *f;
	char *p, *e;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		f = malloc(new_size);

		if (f == NULL)
			return (NULL);

		return (f);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = ptr;
	f = malloc(sizeof(*p) * new_size);

	if (f == NULL)
	{
		free(ptr);
		return (NULL);
	}

	e = f;

	for (m = 0; m < old_size && m < new_size; m++)
		e[m] = *p++;

	free(ptr);
	return (f);
}
