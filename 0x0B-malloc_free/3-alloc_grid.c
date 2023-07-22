#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 *      of integers
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 * @width: 1st input
 * @height: 2nd input
 * Return: integer pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid1;
	int h, k, m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid1 = malloc(sizeof(int *) * height);

	if (grid1 == NULL)
	{
		free(grid1);
		return (NULL);
	}

	k = 0;
	while (k < height)
	{
		grid1[k] = malloc(sizeof(int) * width);
		if (grid1[k] == NULL)
		{
			for (m = k;  m >= 0; m--)
			{
				free(grid1[m]);
			}
			free(grid1);
			return (NULL);
		}
		k++;
	}


	for (h = 0; h < height; h++)
	{
		for (n = 0; n < width; n++)
		{
			grid1[h][n] = 0;
		}
	}


	return (grid1);

}
