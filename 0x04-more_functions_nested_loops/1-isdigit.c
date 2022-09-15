#include "main.h"

/**
 * _isdigit - check for digits (0 through 9)
 * @f: int type number
 * Return: 1 if digit, else 0
 */

int _isdigit(int f)
{
	if (f > 47 && f < 58)
	{
		return (1);
	}

	return (0);
}
