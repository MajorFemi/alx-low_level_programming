#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *f, *a;
	unsigned int m, e;

	a = "";
	if (s1 == NULL)
		s1 = a;
	if (s2 == NULL)
		s2 = a;
	for (m = 0; s1[m] != '\0'; m++)
		;
	f = malloc((m + (n * sizeof(*s2) + 1) * sizeof(*f)));
	if (f == NULL)
		return (NULL);
	for (m = 0; s1[m] != '\0'; m++)
		f[m] = s1[m];
	for (e = 0; s2[e] != '\0' && e < n; e++, m++)
		f[m] = s2[e];
	f[m] = '\0';

	return (f);
}
