#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @f: int type number
 * Return: return value of last digit
 */
int print_last_digit(int f)
{
	int fm;

	if (f < 0)
	{
		fm = -1 * (f % 10);
		_putchar(fm + '0');
		return (fm);
	}
	else
	{
		fm = f % 10;
		_putchar(fm + '0');
		return (fm);
	}
}

