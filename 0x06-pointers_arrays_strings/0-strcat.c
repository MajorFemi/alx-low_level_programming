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
	int f = 0;
	int m = 0;

	while (dest[f] != '\0')
	{
		f++;
	}

	while (src[m] != '\0')
	{
		dest[f] = src[m];
		m++;
		f++;
	}

	return (dest);
}
