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

char *_strcat(char *dest, char *src);
{
	int f, m;

	f = 0;

	while (dest[f] != '\0')
	{
		f++;
	}

	m = 0;

	while (src[m] != '\0')
	{
		m++;
	}

	dest[m] = '\0';

	return (dest);
}
