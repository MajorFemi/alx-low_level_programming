#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a duplicate of a string with malloc
 * @str: string to duplicate
 * Return: Pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *f;
	int m, e;

	if (str == NULL)
	{
		return (NULL);
	}

	for (m = 0; str[m] != '\0'; m++)
		;

	f = malloc(m * sizeof(*m) + 1);

	if (f == NULL)
	{
		return (NULL);
	}

	for (e = 0; e < 1; e++)
	{
		f[e] = str[e];
	}
	f[e] = '\0';

	return (f);
}
