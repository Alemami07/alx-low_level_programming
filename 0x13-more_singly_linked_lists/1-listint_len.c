#include "lists.h"
#include <stddef.h>
/**
 * listint_len - gives number of elements  in a linked list
 * @h: list to be evaluated
 * Return: number of elments
 */
size_t listint_len(const listint_t *h)
{
	size_t elem;

	elem = 0;
	while (h)
	{
		if (h->n)
			elem += 1;
		h = h->next;
	}
	return (elem);
}
