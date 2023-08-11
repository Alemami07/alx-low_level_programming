#include <stdlib.h>
#include "main.h"
/**
 *array_range - creates an array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ran;
	int r;

	if (min > max)
		return (NULL);
	ran = malloc(sizeof(int) * (max - min + 1));

	if (ran == NULL)
		return (NULL);

	for (r = 0; min <= max; r++)
	{
		ran[r] = min++;
	}

	return (ran);

}
