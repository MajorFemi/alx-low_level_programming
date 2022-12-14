#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Description: contains only positive digits
 * Return: 0 Success else 1 Error
 */

int main(int argc, char *argv[])
{
	int sum, f;
	char *m;
	int digit;

	sum = 0;
	if (argc > 1)
	{
		for (f = 1; argv[f]; f++)
		{
			digit = strtol(argv[f], &m, 10);
			if (!*m)
			{
				sum += digit;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
