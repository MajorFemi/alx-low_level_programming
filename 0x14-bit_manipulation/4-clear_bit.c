#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * @n: unsigned long
 * @index: index
 * Return: 1 if it worked otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 53 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);
}
