#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string array
 * @c: character
 * Return: a ponter to the first occurence of c in s or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
