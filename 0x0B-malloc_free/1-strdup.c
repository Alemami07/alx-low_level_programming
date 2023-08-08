#include <stdlib.h>
#include "main.h"
/**
 *_strdup -  allocates new memory with given string as parameter
 *@str: given strung
 *Return: pointer, Null if fail
 */
char *_strdup(char *str)
{
	char *array;
	int f, g;

	if (str == NULL)
	{
		return (NULL);
	}

	f = 0;
	while (str[f])
		f++;

	array = malloc(sizeof(char) * f);

	for (g = 0; str[g]; g++)
		array[g] = str[g];
	return (array);
}
