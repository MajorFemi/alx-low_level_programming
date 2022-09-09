#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main blocks or Entry points
 *
 * Description: Prints all letters except q and e
 *
 * Return: 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'q' && lower != 'e')
			putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
