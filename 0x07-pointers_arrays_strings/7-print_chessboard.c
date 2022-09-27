#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int f, m;

	f = 0;

	while (f < 8)
	{
		m = 0;
		while (m < 8)
		{
			_putchar(a[f][m]);
			m++;
		}
		_putchar('\n');
		f++;
	}
}
