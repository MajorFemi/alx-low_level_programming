#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 *
 * @f: pointer as string
 * Return: pointer to string
 */

char *cap_string(char *f)
{
	int a = 0;

	while (f[a])
	{
		if (a == 0 && (f[a] >= 97 && f[a] <= 122))
		{
			f[a] -= 32;
		}

		if (check_separators(f[a]) && (f[a + 1] >= 97 && f[a + 1] <= 122))
		{
			f[a + 1] -= 32;
		}
		a++;
	}
	return (f);
}

/**
 * check_separators - separators of words; space tabulation, etc
 *
 * @d: an input character
 * Return: 1 if separator, 0 otherwise
 */

int check_separators(char d)
{
	int a = 0;

	char separators[13] = { ' ', '\t', '\n', ',', ':', '.', '!',
		'?', '"', '(', ')', '{', '}', };

	for (; a < 13; a++)
	{
		if (c == separators[a])
		{
			return (1);
		}
	}
	return (0)
}
