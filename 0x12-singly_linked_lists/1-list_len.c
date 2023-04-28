#include <stdlib.h>
#include "lists.h"
/**
 *list_len - returns number of elements in list
 *@h: points to list
 *
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t y;

	y = 0;

	while (h)
	{
		y++;
	h = h->next;
	}
	return (y);
}
