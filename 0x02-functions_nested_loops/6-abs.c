#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @f: int type number
 * Return: absolute value of @f
 */
int _abs(int f)
{
	if (f < 0)
	{
		return (f * -1);
	}
	else
	{
		return (f);
	}
}
