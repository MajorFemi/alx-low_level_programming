#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @f: pointer as string
 * Return: encoded f
 */

char *leet(char *f)
{
	int a;

	for (a = 0; f[a] != '\0'; a++)
	{
		while (f[a] == 97 || f[a] == 65)
		{
			f[a] = 52;  /* 4 */
		}
		while (f[a] == 101 || f[a] == 69)
		{
			f[a] = 51;  /* 3 */
		}
		while (f[a] == 111 || f[a] == 79)
		{
			f[a] = 48;  /* 0 */
		}
		while (f[a] == 116 || f[a] == 84)
		{
			f[a] = 55;  /* 7 */
		}
		while (f[a] == 108 || f[a] == 76)
		{
			f[a] = 49;  /* 1 */
		}
	}
	return (f);
}
