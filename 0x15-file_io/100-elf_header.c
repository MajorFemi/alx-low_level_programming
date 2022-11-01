#include <stdio.h>

/**
 * main - The entry point
 * @argc: number of args
 * @argv: pointer to array of args
 * Return: 1 on success, error code on failure
 */

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
