#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: fixed
 * Return: nflips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f, nflips = 0;
	unsigned long int e = sizeof(unsigned long int) * 8;

	for (f = 0; f < e; f++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
