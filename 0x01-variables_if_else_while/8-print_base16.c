#include <stdio.h>
#include <stdlib.h>
/**
 * main - main body or Entry points
 *
 * Description: Prints all the numbers of base 16 in lowercase
 * can only use putchar function; twice
 *
 * Return: 0
 */
int main(void)
{
	char lower;
	int basesixteen;

	for (basesixteen = 0; basesixteen < 10; basesixteen++)
	{
		putchar(basesixteen + '0');
	}
	for (lower = 'a'; lower < 'g'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
