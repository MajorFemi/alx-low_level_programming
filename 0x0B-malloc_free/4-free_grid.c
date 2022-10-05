#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up 2d grid created
 * @grid: double pointer 2d grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
		free(grid[f]);
	free(grid);
}
