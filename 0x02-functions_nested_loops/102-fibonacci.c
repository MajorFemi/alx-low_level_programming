#include "main.h"
#include <stdio.h>
/**
 * main - main body or Entry point
 *
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int collect = 2;
	long int f = 1, e = 2;
	long int m;

	printf("%lu, ", f);
	while (collect <= 50)
	{
		if (collect == 50)
		{
			printf("%lu\n", e);
		}
		else
		{
			printf("%lu, ", e);
		}

		m = e;
		e += f;
		f = m;
		collect++;
	}

	return (0);
}
