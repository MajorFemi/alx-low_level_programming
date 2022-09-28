#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: int type
 * Return: 1 else -1 to indicate error
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
