#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * Description: can only use _putchar function to print
 * @n: int type number
 * Return: if n is 0 or less print \n
 */

void print_line(int n)
{
	int f;

	f = 0;
	while (f < n)
	{
		_putchar(95);
		f++;
	}
	_putchar('\n');
}
