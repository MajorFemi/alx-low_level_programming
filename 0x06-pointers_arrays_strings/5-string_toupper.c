#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to upper
 *
 * @f: pointer as string
 *
 * Return: pointer to the converted string
 */

char *string_toupper(char *f)
{
	char *begin = f;

	while (*f)
	{
		if (*f >= 97 && *f <= 122)
		{
			*f -= 32;
		}
		f++;
	}
	return (begin);
}

