#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @f: int type number
 * Return: 1 if uppercase, else 0
 */

int _isupper(int f)
{
	if (f > 64 && f < 91)
	{
		return (1);
	}

	return (0);
}
