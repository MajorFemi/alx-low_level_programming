#include <stdio.h>
#include "main.h"
/**
 * main -main body or Entry point
 *
 * Description: Print the sum of even fibonacci numbers up to a fib value
 * not exceeding 4,000,000
 * Return: 0
 */
int main(void)
{
	int f = 1, e = 2, sum = 0;
	int m;

	while (e < 4000000)
	{
		if (e % 2 == 0)
			sum += e;

		m = e;
		e += f;
		f = m;
	}
	printf("%d\n", sum);

	return (0);
}
