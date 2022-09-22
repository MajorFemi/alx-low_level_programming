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

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (f = 0; f < size; f += 10)
		{
			printf("%.8x:", f);
			for (e = f; e < f + 10; e++)
			{
				if (e % 2 == 0)
					printf(" ");
				if (e < size)
					printf("%.2x", *(b + e));
				else
					printf(" ");
			}
			printf(" ");
			for (m = f; m < f + 10; m++)
			{
				if (m >= size)
					break;
				if (*(b + m) < 32 || *(b + m) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + m));
			}
			printf("\n");
		}
	}
}
