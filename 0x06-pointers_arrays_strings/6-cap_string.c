#include "main.h"

int check_separators(char c);

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
