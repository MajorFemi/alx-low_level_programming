#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @src: char type as pointer
 * @dest: char type as pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int f;

	for (f = 0, *(src + f) != '\0'; f++)
	{
		dest[f] = *(src + f);
	}
	dest[f] = '\0';

	return (dest);
}

