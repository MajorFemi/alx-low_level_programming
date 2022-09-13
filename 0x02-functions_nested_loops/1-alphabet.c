#include "main.h"
/**
 * main - Entry point or main body
 *
 * Description: Prints the alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');

}
