#include "main.h"

/**
 * get_endianness - fnction checks for endianness
 * Return: 0 if big endian otherwise 1
 */

int get_endianness(void)
{
	unsigned int f = 1;
	char *e = (char *)&f;

	if (*e)
		return (1);
	else
		return (0);
}
