#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @f: pointer as string
 *
 * Return: encoded f
 */

char *rot13(char *f)
{
	int s, k;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	for (s = 0; f[s] != '\0'; s++)
	{
		for (k = 0; alphabet[k] != '\0'; k++)
		{
			if (f[s] == alphabet[k])
			{
				f[s] += cipher[k];
				break;
			}
		}

	}

	return (f);
}
