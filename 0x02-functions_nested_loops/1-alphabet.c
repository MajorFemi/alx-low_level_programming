#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0
*/
void print_alphabet(void)	/* prints alphabet */
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');

}
