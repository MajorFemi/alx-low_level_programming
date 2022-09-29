#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: int type
 *
 * Return: 1 else -1 if n does not have natural root.
 */

int _sqrt_recursion(int n)
{
	return (_sqrtfinder(n, 1));
}

/**
 * _sqrtfinder - helps to solve _sqrt_recursion
 * @f: determines if square root
 * @m: incrementer to compare against 'f'
 * Return: square root if natural root else -1 if not found
 */

int _sqrtfinder(int f, int m)
{
	int square;

	square = m * m;
	if (square == f)
	{
		return (m);
	}
	else if (square < f)
	{
		return (_sqrtfinder(f, m + 1));
	}
	else
		return (-1);
}
