#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by my
 * alloc_grid function.
 *
 * @grid: the grid to free up
 * @height: the number of rows in the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
