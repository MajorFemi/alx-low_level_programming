#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: string 1 as pointer
 * @s2: string 2 as pointer
 * Return: 1 if strings are identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
		{
			return (wildcmp(s1, ++s2));
		}
		else if (*s1 == '*' && *s2 == '\0')
		{
			return (wildcmp(++s1, s2));
		}
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return (wildcmp(++s1, s2));
		else
			return (wildcmp(s1, findsrc(s2, *(s1 + 1), 0, 0) + s2));
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		else
			return (wildcmp(s1 + findsrc(s1, *(s2 + 1), 0, 0), s2));
	}
	return (0);
}

/**
 * findsrc - string comparison
 * @s: string
 * @f: string
 * @e: int type
 * @m: int type
 * Return: 1 else 0
 */

int findsrc(char *s, char f, int e, int m)
{
	if (*(s + e) == '\0')
		return (m + 1);
	else if (*(s + e) == f || *(s + e) == '*')
		m = e;

	return (findsrc(s, f, e + 1, m));
}
