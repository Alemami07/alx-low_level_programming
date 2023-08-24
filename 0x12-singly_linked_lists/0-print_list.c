#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints elements of a list
 * @h: pointer to the list
 * Return: number of elemnts printed (list content)
 */
size_t print_list(const list_t *h)
{
	size_t b;

	b = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		b++;
	}
	return (b);
}
