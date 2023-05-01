#include "lists.h"
/**
 *insert_nodeint_at_index - inerts node at given index
 *@head: points to list
 *@idx: position of added node
 *@n: value to be added
 *
 *Return: location of added node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *fresh;
	unsigned int q;

	fresh = malloc(sizeof(listint_t));

	if (fresh || head == NULL)
	{
	fresh->n = n;
	fresh->next = NULL;
	return (NULL);
	}
		if (idx == 0)
		{
			fresh->next = *head;
			*head = fresh;
			return (fresh);
		}
	for (q = 0; temp && q < idx; q++)
	{
		if (q == idx - 1)
		{
			fresh->n = n;
			fresh->next = temp->next;
			temp->next = fresh;
			return (fresh);
		}
		else
			temp = temp->next;
	}
	return (fresh);
}
