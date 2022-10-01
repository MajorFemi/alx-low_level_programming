#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success else 1 Error
 */

int main(int argc, char *argv[])
{
	int sum, count;
	unsigned int f;
	char *m;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = strtol(argv[1], &m, 10);
	count = 0;

	if (!*m)
	{
		while (sum > 1)
		{
			for (f = 0; f < sizeof(cents[f]); f++)
			{
				if (sum >= cents[f])
				{
					count += sum / cents[f];
					sum = sum % cents[f];
				}
			}
		}
		if (sum == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}

