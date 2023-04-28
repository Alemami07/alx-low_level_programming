#include <stdio.h>
#include "lists.h"
/**
 *print_list - prints elements of a list
 *@h: points to list
 *
 *Return: number printed
 */
size_t print_list(const list_t *h)
{
	size_t g;

	g = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		g++;
	}
	return (g);

}
