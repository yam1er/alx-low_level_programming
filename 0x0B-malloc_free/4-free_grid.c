#include "main.h"

/**
 * free_grid - function that frees 2 dimensional grid
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
