#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * Description: if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 * @b: unsigned int memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *f = malloc(b);

	if (f == NULL)
	{
		exit(98);
	}

	return (f);
}
