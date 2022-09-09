#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main blocks or Entry points
 *
 * Description: Prints all single digits of baase 10 from 0
 *
 * Return: 0
 */
int main(void)
{
	int baseten = 0;

	while (baseten < 10)
	{
		printf("%d", baseten);
		baseten++;
	}
	putchar('\n');

	return (0);
}
