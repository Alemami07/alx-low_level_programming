#include "lists.h"

/**
 *listint_len - return number of elements in a list
 *@h: points to list
 *
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elem;

	elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
