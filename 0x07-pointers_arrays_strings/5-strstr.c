#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int f, e, m;

	f = 0;
	m = 0;

	while (haystack[f] != '\0')
	{
		e = 0;
		while (needle[e + m] != '\0' && haystack[f + m] != '\0'
				&& needle[e + m] == haystack[f + m])
		{
			if (haystack[f + m] != needle[e + m])
			{
				break;
			}
			m++;
		}
		if (needle[e + m] == '\0')
		{
			return (&haystack[f]);
		}
		e++;
		f++;
	}

	return (NULL);
}


