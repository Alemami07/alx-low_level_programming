#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *_strdup - copies memory and returns pointer
 *@str: memory location to be copied
 *Return: pointer
 */
char *_strdup(char *str)
{
	char *arr;
	int p, q;

	if (str == NULL)
		return (NULL);

	p = 0;
	while (str[p] != '\0')
		p++;

	arr = malloc(sizeof(char) * (p + 1));

	if (arr == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
		arr[q] = str[q];

	return (arr);

}
