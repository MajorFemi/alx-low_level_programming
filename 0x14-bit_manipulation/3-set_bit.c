#include "main.h"

/** set_bit - sets the value of bit to 1 
 * @n: unsigned long to change
 * @index: index to change to one
 * Return: 1 if it worked or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
