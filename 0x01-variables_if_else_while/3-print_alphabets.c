#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - maain blocks or Entry points
 *
 * Description: Prints the alphabet in lowercase and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	lower = 'A';

	while (lower <= 'Z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
