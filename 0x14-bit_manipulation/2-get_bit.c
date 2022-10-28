#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: unsigned int
 * @index: index
 * Return: the value of the bit at index or -1 error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}

