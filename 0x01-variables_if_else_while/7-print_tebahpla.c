#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -main body or Entry points
 *
 * Description: Prints the lowercase alphabet in reverse
 * can only use putchar function; twice
 *
 * Return: 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
