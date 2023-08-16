#include <stddef.h>
#include "function_pointers.h"
/**
 *array_iterator - executes an array of function pointers
 *@array: list of functions
 *@size: size of array
 *@action: function to carry out
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;

	if (array == NULL)
		return;
	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}

