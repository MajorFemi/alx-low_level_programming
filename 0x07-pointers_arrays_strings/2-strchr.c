#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string array
 * @c: character
 * Return: a ponter to the first occurence of c in s or NULL
 */

char *_strchr(char *s, char c)
{
	int f = 0;

	while (*(s + f) != '\0')
	{
		if (*(s + f) == c)
		{
			return (s + f);
		}
	}
	if (c == '\0')
	{
		return (s + f);
	}

	return (NULL);
}
