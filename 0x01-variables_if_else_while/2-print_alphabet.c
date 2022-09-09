#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main blocks or Entry point
 *
 * Description: Prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
