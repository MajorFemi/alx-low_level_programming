#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings with malloc
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *f;
	int e, m, a, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (e = 0; s1[e] != '\0'; e++)
		;
	for (m = 0; s2[m] != '\0'; m++)
		;

	f = malloc((e * sizeof(*s1)) + (m * sizeof(*s2)) + 1);
	if (f == NULL)
		return (NULL);

	for (a = 0, l = 0; a < (e + m + 1); a++)
	{
		if (a < e)
			f[a] = s1[a];
		else
			f[a] = s2[l++];
	}

	return (f);
}
