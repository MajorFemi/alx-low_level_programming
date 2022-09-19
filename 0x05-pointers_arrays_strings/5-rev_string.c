#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: char type as pointer
 */

void rev_string(char *s)
{
	int f, big, mid;
	char start, end;

	f = 0;

	while (s[f] != '\0')
	{
		f++;
	}
	big = f - 1;
	mid = big / 2;

	while (mid >= 0)
	{
		start = s[big - mid];
		end = s[mid];
		s[mid] = start;
		s[big - mid] = end;
		mid--;
	}
}
