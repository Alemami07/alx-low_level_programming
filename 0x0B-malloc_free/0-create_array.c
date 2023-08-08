#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array of given size and value
 *@size: size of array
 *@c: element of array
 *Return: pointer to array or 0 if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int t;
	char *ar;

	ar = malloc(size * sizeof(c));

	if (size == 0 || ar == NULL)
	{
		return (0);
	}

	for (t = 0; t < size; t++)
		ar[t] = c;
	return (ar);
}
