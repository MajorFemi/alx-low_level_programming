#include "main.h"

/**
 * is_prime_number - prime number
 * @n: int type
 * Return: 1 if integer is prime else 0
 */

int is_prime_number(int n);
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}

	return (is_divisible(n, div));
}

/**
 * is_divisible - check if integer is divisible
 * @f: int type
 * @div: result of division
 * Return: 1 if numebr is divisible else 0
 */

int is_divisible(int f, int div)
{
	if (f % div == 0)
	{
		return (0);
	}
	if (div == f / 2)
	{
		return (1);
	}
	return is_divisible(f, div + 1)
}

