#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - creates a 2D grid
 *@width: width of grid
 *@height: height of grid
 *Return: pointer if success NULL if fail
 */
int **alloc_grid(int width, int height)
{

	int p, q, **arr;

	if (width < 1 || height < 1)

		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		free(arr);
		return (NULL);

	for (p = 0; p < height; p++)
	{
		arr[p] = malloc(sizeof(int) * width);
		if (arr[p] == NULL)
			for (; p >= 0; p--)
			{
				free(arr[p]);

			free(arr);

			return (NULL);
			}
	}

	for (p = 0; p < height; p++)
	{
		for (q = 0; q < width; q++)
	{
		arr[p][q] = 0;
	}
	}
	return (arr);

	return (NULL);
}
