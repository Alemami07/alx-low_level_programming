#include <stdlib.h>
#include "main.h"
/**
 *free_grid - frees dynamically created grid
 *@grid: grid to free
 *@height: height of grid
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int u;

	for (u = 0; u < height; u++)
	{
		free(grid[u]);
	}
	free(grid);
}
