#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - allocates memory using malloc
 *@b: number of bytes to aloocate
 *Return: pointer to newly allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *loc;

	loc = malloc(b);

	if (loc == NULL)
	exit(98);

	return (loc);
}
