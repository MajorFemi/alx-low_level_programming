#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in 's' that matches one of the bytes
 * in 'accept' or NULL if no such byte
 */

char *_strpbrk(char *s, char *accept)
{
	int f, e;
	char *a;

	f = 0;
	while (s[f] != '\0')
	{
		e = 0;
		while (accept[e] != '\0')
		{
			if (accept[e] == s[f])
			{
				a = &s[f];
				return (a);
			}
			e++;
		}
		f++;
	}

	return (0);
}
