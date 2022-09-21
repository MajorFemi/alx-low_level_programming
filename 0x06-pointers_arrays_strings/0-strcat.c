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
	char *fem = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (fem);
}
