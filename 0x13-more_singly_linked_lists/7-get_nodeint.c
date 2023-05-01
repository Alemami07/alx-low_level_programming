#include "lists.h"
/**
 *get_nodeint_at_index - gets node at an index
 *@index: position to get node from
 *@head: points to list
 *
 *Return: gotten nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int b = 0;

	while (node && b < index)
	{
		node = node->next;
		b++;
	}

	return (node);
}
