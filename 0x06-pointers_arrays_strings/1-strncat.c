#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * Description: It is similar to the _strcat function, except that
 * it use most n bytes from src
 *
 * @dest: pointer one
 * @src: pointer two
 * @n: int type
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int f = 0;
	int m = 0;

	while (dest[f] != '\0')
	{
		f++;
	}

	while (src[m] != '\0' && m < n)
	{
		dest[f] = src[m];
		m++;
		f++;
	}

	return (dest);
}
