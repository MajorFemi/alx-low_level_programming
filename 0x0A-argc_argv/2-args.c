#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f = 0;

	while (f < argc)
	{
		printf("%s\n", argv[f]);
		f++;
	}
	return (0);
}
