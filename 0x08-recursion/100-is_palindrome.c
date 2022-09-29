#include "main.h"

/**
 * is_palindrome - prints palindrome
 * @s: pointer as string
 * Return: 1 if string is palindrome else 0
 */

int is_palindrome(char *s)
{
	int len;

	len = get_len(s) - 1;

	return (mr_pal(s, --len));
}

/**
 * get_len - gets length of the string
 * @s: string
 * Return: string length
 */

int get_len(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (1 + get_len(++s));
	}
}

/**
 * mr_pal - palindrome check
 * @s: string as pointer
 * @f: length of string
 * Return: 1 if palindrome else 0
 */

int mr_pal(char *s, int f)
{
	if (*s == *(s + f))
	{
		if (f <= 0)
		{
			return (1);
		}
		else
		{
			return (mr_pal(++s, f - 2));
		}
	}
	else
		return (0);
}
