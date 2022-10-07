#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_number - checks if it contains non-digit
 * @f: string
 * Return: 0 if non-digit else 1
 */

int is_number(char *f)
{
	int m = 0;

	while (f[m])
	{
		if (f[m] < '0' || f[m] > '9')
			return (0);
		m++;
	}
	return (1);
}

/**
 * _strlen - length of string
 * @f: string
 * Return: string length
 */

int _strlen(char *f)
{
	int m = 0;

	while (f[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * errors - handles errors or exceptions
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *f1, *f2;
	int l1, l2, l, e, c, num1, num2, *res, a = 0;

	f1 = argv[1], f2 = argv[2];
	if (argc != 3 || !is_number(f1) || !is_number(f2))
		errors();
	l1 = _strlen(f1);
	l2 = _strlen(f2);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (!res)
		return (1);
	for (e = 0; e <= l1 + l2; e++)
		res[e] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		num1 = f1[l1] - '0';
		c = 0;
		for (l2 = _strlen(f2) - 1; l2 >= 0; l2--)
		{
			num2 = f2[l2] - '0';
			c += res[l1 + l2 + 1] + (num1 * num2);
			res[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[l1 + l2 + 1] += c;
	}
	for (e = 0; e < l - 1; e++)
	{
		if (res[e])
			a = 1;
		if (a)
			_putchar(res[e] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}

