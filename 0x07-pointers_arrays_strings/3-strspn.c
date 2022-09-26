#include "main.h"

/**
 * _strspn - gets the length of a prefic substring
 * @s: string array
 * @accept: parameter for char
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int f, e, m;

	f = 0;
	while (s[f] != '\0')
	{
		m = 0
			for (e = 0; accept[e] != '\0'; e++)
			{
				if (s[f] == accept[e])
				{
					t = 1;
				}
			}
			e = 0;
			if (m == 0)
			{
				break;
			}
			num++;
			f++;
	}
	return (f);
}
