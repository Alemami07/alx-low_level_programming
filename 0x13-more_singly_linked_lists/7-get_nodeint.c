#include <stdlib.h>
#include "lists.h"
/**
 *get_nodeint_at_index - gets the node at a given index
 *@head: linked list
 *@index: index of node
 *Return: data in npde
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int k;

	k = 0;
	while (head)
	{
		if (k == index)
			return (head);
	temp = head->next;
	head = temp;
	k++;
	}
	return (NULL);
}
