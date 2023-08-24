#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - return number of elements in a lis
 * @h: pointer to list
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t v;

	v = 0;

	while (h)
	{
		v++;
		h = h->next;
	}
	return (v);
}
