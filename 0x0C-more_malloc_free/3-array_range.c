#include "main.h"
/**
 *array_range - dimension of array
 *@min: minimum range
 *@max: maximum range
 *
 *Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *point;
	int size, p;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	point = malloc(sizeof(int) * size);

	if (point == NULL)
		return (NULL);

	for (p = 0; min <= max; p++)
		point[p] = min++;
	return (point);
}
