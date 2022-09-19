#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string type as pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
		f++;
	}

	return (f);
}
