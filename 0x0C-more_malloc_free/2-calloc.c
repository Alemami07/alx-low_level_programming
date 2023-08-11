#include <stdlib.h>
#include "main.h"
/**
 *_calloc - allocates memory for an array and initializes it to zero
 *@nmemb: size of array
 *@size: size of elements
 *Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int p;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	p = 0;
	while (p < nmemb * size)
	{
		arr[p] = 0;
		p++;
	}
	return (arr);
}
