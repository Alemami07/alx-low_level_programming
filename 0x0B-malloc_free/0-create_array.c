#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array
 *Return: pointer
 *@size: size of array
 *@c: elements of array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int q;

	ar = malloc((size) * sizeof(char));

	if (size == 0 || ar == NULL)
	{
		return (0);
	}
	
	for (q = 0; q < size; q++)
		ar[q] = c;
	return (ar);
}
