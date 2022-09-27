#include "main.h"

/**
 * _strspn - gets the length of a prefic substring
 * @s: string array
 * @accept: parameter for char
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int f;
	int e;
	int m;

	f = 0;
	m = 0;

	while (s[f] = '\0')
	{
		e = 0;
		while (accept[e] != '\0')
		{
			if (s[f] == accept[e])
			{
				m++;
				break;
			}
			e++;
		}
		if (accept[e] == '\0')
		{
			break;
		}
		f++;
	}
	return (m);
}
