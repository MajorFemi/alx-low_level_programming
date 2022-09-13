#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char lower;
	int times = 0;

	while (times < 10)
	{
		lower = 'a';
		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}
		_putchar('\n');
		times++;
	}
}

