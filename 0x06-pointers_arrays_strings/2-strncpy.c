#include "main.h"

/**
 * _strncpy - copies a string
 *
 * Description: created function works exactly like strncpy
 *
 * @dest: pointer one
 * @src: pointer two
 * @n: int type
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int f = 0;

	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}

	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}

	return (dest);
}
