#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2d array with malloc
 * Description: Each element of the grid should be initialized to 0
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int f, m;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (f = 0; f < height; f++)
	{
		grid[f] = malloc(width * sizeof(**grid));
		if (grid[f] == NULL)
		{
			for (f--; f >= 0; f--)
				free(grid[f]);
			free(grid);
			return (NULL);
		}
		for (m = 0; m < width; m++)
			grid[f][m] = 0;
	}

	return (grid);
}
