#include "main.h"

/**
 * _memcpy - copies from initial memory area to another
 * @dest: final memory area
 * @src: initial memory area
 * @n: number of byte
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		dest[f] = src[f];
	}

	return (dest);
}
