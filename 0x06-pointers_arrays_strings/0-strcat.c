#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * Description: appends src string to the dest string
 *
 * @dest: pointer one
 * @src: pointer two
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int f, m;

	for (f = 0; dest[f] != '\0', f++)
	{
		;
	}

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[f] = src[m];
		f++;
	}

	dest[f] = '\0';

	return (dest);
}
