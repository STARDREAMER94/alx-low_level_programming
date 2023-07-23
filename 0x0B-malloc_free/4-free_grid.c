#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid,
 *            previously created by your alloc_grid function.
 * Note that we will compile with your alloc_grid.c file. Make sure it compiles
 * @grid: the pointed pointer integer that was used by alloc_grid function
 * @height: the integer that was used by alloc_grid function
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}

	free(grid);
}
