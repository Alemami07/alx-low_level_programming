#include <stdio.h>
#include "lists.h"
/**
 *print_listint - prints a linked list
 *@h: list to print
 *Return: number of node in list
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;

	while (h)
	{
	printf("%d\n", h->n);
	node += 1;
	h = h->next;
	}
	return (node);
}

