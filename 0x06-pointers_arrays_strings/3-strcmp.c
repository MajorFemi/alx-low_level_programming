#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * Description: created function works exactly like strcmp
 *
 * @s1: pointer one as string
 * @s2: pointer two as string
 *
 * Return: difference between two string
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
