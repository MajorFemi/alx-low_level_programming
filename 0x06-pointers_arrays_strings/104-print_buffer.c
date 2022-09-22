#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int f, e, m;

	f = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (f < size)
	{
		e = size - f < 10 ? size - f : 10;
		printf("%08x: ", f);
		for (m = 0, m < 10; m++)
		{
			if (m < e)
				printf("%02x", *(b + f + m));
			else
				printf(" ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < e; m++)
		{
			int d = *(b + f + m);

			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		f += 10;
	}
}


