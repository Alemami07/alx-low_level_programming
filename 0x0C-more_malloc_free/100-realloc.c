#include <stdlib.h>
#include "main.h"
/**
 *_realloc - reallocates memory
 *@ptr: pointer to old memory
 *@old_size: old size
 *@new_size: new size
 *Return: pointer to new
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int q;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	old_ptr = ptr;
	if (!new_ptr)
		return (NULL);

	if (new_size < old_size)
	{
		for (q = 0; q < new_size; q++)
			new_ptr[q] = old_ptr[q];
	}
	if (new_size > old_size)
	{
	for (q = 0; q < old_size; q++)
		new_ptr[q] = old_ptr[q];
	}
	free(ptr);
	return (new_ptr);
}
