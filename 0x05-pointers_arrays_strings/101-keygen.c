#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main body or Entry point
 *
 * Description: Program generates random valid password
 *
 * Return: 0
 */

int main(void)
{
	int f, sum, m;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (f = 0; f < 100; f++)
	{
		pass[f] = rand() % 78;
		sum += (pass[f] + '0');
		putchar(pass[f] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}

	return (0);
}
