#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @f: int type number
 * Description: Numbers will be separated by comma
 * Numbers will be printed in order; last number should be 98
 * Allowed to use standard lib
 */
void print_to_98(int f)
{
	if (f > 98)
	{
		while (f >= 98)
		{
			printf("%d", f);
			if (f != 98)
			{
				printf(", ");
			}
			f--;
		}
	}
	else
	{
		while (f <= 98)
		{
			printf("%d", f);
			if (f != 98)
			{
				printf(", ");
			}
			f++;
		}
	}
	printf("\n");
}
