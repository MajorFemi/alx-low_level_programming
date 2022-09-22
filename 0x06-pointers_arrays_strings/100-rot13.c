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
	int s = 0;

	while (f[s] != '\0')
	{
		while ((f[s] >= 97 && f[s] <= 122) ||
				(f[s] >= 65 && f[s] <= 90))
		{
			if ((f[s] >= 97 && f[s] <= 109) ||
					(f[s] >= 65 && f[s] <= 77))
			{
				f[s] += 13;
			}
			else
			{
				f[s] -= 13;
			}
			s++;
		}
		s++;
	}
	return (f);
}
