#include "function_pointers.h"
/**
 *int_index - returns index for which a function is true
 *@array: array of integers
 *@size: size of array
 *@cmp: pointer to funtion
 *Return: an int
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int p;

	if (size <= 0)
		return (-1);
	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}
