#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for the result
 * @size_r: Size of the buffer
 * Return: the pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int g = 0, h = 0, f, e, m, i, sum = 0;

	while (*(n1 + g) != '\0')
		g++;
	while (*(n2 + h) != '\0')
		h++;
	if (g >= h)
		e = g;
	else
		e = h;
	if (size_r <= e + 1)
		return (0);
	r[e + 1] = '\0';
	g--, h--, size_r--;
	m = *(n1 + g) - 48, i = *(n2 + h) - 48;
	while (e >= 0)
	{
		f = m + i + sum;
		if (f >= 10)
			sum = f / 10;
		else
			sum = 0;
		if (f > 0)
			*(r + e) = (f % 10) + 48;
		else
			*(r + e) = '0';
		if (g > 0)
			g--, m = *(n1 + g) - 48;
		else
			m = 0;
		if (h > 0)
			h--, i = *(n2 + h) - 48;
		else
			i = 0;
		e--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
