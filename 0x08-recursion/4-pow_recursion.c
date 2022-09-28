#include "main.h"

/**
 * _pow_recursion - value of x raised to the power of y
 * @x: int type
 * @y: int type
 *
 * Return: 1 else -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
