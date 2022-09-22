#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @f: pointer as string
 * Return: encoded f
 */

char *leet(char *f)
{
	char selections[] = {65, 52, 69, 51, 79, 48, 84, 55, 76, 49};
	int k, s;

	for (k = 0; f[k] != '\0'; k++)
	{
		for (s = 0; s < 10; s += 2)
		{
			if (f[k] == selections[s] || f[k] == selections[s] + 32)
			{
				f[k] = selections[s + 1];
			}
		}
	}

	return (f);
}
