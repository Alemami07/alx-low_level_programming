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
	int p;

	p = 0;

	while (p < height)
	{
		free(grid[p]);
		p++;
	}
	free(grid);
}
