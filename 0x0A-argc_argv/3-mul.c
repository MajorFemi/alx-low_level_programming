#include "main.h"
#include <stdio.h>
#include <stlib.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success else 1 - Error
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
