#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid, f, g;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (f = 0; f < height; f++)
	{
		grid[f] = malloc(width * sizeof(int));
		if (grid[f] == NULL)
		{
			while (f >= 0)
			{
				free(grid[f]);
				f--;
			}
			free(grid);
			return (NULL);
		}
		for (g = 0; g < width; g++)
			grid[f][g] = 0;
	}
	return (grid);
}
