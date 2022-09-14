#include "main.h"
/**
 * print_sign - print the sign of a number
 * @f: typr int integer, can be negative or positive
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 if +, 0 if 0 and -1 if -
 */
int print_sign(int f)
{
	if (f > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (f < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
