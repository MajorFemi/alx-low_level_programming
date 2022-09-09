#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block or Entry Points
 *
 * Description: Prints all single digit numbers of base 10, starting from 0
 * Not allowed to usde any varible of type char
 * Can only use putchar twice
 *
 * Return: 0
 */
int main(void)
{
	int baseten = 0;

	while (baseten < 10)
	{
		putchar(baseten + '0');
		baseten++;
	}
	putchar('\n');

	return (0);
}
