#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2-d array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int wid, hei;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)(malloc(height * sizeof(int *)));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (hei = 0; hei < height; hei++)
	{
		grid[hei] = (int *)(malloc(width * sizeof(int)));

		if (grid[hei] == NULL)
		{
			for (wid = 0; wid < hei; wid++)
			{
				free(grid[wid]);
			}
			free(grid);
			return (NULL);
		}
		for (wid = 0; wid < width; wid++)
			grid[hei][wid] = 0;
	}

	return (grid);
}
