#include <stdio.h>
#include "main.h"

/**
 * main - Entry point or main body
 *
 * Description: Print fizz for multiples of 3, Buzz for multiples of 5
 * fizzbuzz for both 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int f;

	f = 1;
	while (f < 101)
	{
		if (f % 3 == 0 && f % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (f % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (f % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", f);
		}
		f++;
	}
	printf("\n");

	return (0);
}

