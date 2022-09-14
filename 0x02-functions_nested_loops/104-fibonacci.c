#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main body or Entry point
 * Description: Find and print the first 98 fib numbers starting with 1 and 2
 * Numbers should be comma and space separated
 * Return: 0
 */
int main(void)
{
	unsigned long int fm1 = 0, al1 = 1, fm2 = 0, al2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu ", al1, al2);
	for (count = 2; count < 98; count++)

	{
		if (al1 + al2 > LARGEST || fm2 > 0 || fm1 > 0)
		{
			hold1 = (al1 + al2) / LARGEST;
			hold2 = (al1 + al2) % LARGEST;
			hold3 = fm1 + fm2 + hold1;
			fm1 = fm2, fm2 = hold3;
			al1 = al2, al2 = hold2;
			printf("%lu%010lu", fm2, al2);
		}
		else
		{
			hold2 = al1 + al2;
			al1 = al2, al2 = hold2;
			printf("%lu", al2);
		}
		if (count != 97)
			printf(", ");
	}
printf("\n");
	return (0);
}
