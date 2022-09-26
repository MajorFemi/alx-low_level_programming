#include "main.h"

/**
 * _memset - fills the memory area with constant byte
 * @s: string array
 * @b: constant byte
 * @n: number of byte
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		s[f] = b;
	}

	return (s);
}
