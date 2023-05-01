#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - creates grid
 *@width: width of grid
 *@height: height of grid
 *
 *Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **gridd;
	int u, v;

	if (height || width <= 0)
		return (NULL);

	gridd = malloc(sizeof(int *) * height);

		if (gridd == NULL)
		return (NULL);

	for (u = 0; u < height; u++)
	{
		gridd[u] = malloc(sizeof(int) * width);

		if (gridd[u] == NULL)
		{
			for (; u >= 0; u--)
				free(gridd[u]);
				
			free(gridd);
			return (NULL);
		}
	}
	for (u = 0; u < height; u++)
	{
		for (v = 0; v < width; v++)

			gridd[u][v] = 0;

	}
	return (gridd);
}
