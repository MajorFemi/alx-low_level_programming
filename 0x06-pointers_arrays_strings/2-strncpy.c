#include "main.h"

/**
 * _strncpy - copies a string
 *
 * Description: There's an existing strncpy but function should
 * work exactly like it
 *
 * @dest: pointer one
 * @src: ponter two
 * @n: int type
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int f = 0;
	int m = 0;

	while (f != n)
	{
		dest[m] = src[f];
		m++;
		f++;
		if (src[f] == '\0')
		{
			break;
		}
	}
	while (m != n)
	{
		dest[m++] = '\0';
	}

	return (dest);
}
