#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 *
 * @f: pointer as string
 * Return: pointer to string
 */

char *cap_string(char *f)
{
	int a, d;
	int activate;
	char separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (a = 0, activate = 0; f[a] != '\0'; a++)
	{
		if (f[0] >= 97 && f[0] <= 122)
		{
			activate = 1;
		}
		for (d = 0; separators[d] != '\0'; d++)
		{
			if (separators[d] == f[a])
			{
				activate = 1;
			}
		}
		if (activate)
		{
			if (f[a] >= 97 && f[a] <= 122)
			{
				f[a] -= 32;
				activate = 0;
			}
			else if (f[a] >= 65 && f[a] <= 90)
			{
				activate = 0;
			}
			else if (f[a] >= 48 && f[a] <= 57)
			{
				activate = 0;
			}
		}
	}
	return (f);
}
