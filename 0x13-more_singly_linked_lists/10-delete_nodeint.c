#include "lists.h"
/**
 *delete_nodeint_at_index - deletes node at given index of list
 *@head: double pointrer to list
 *@index: position to delete node
 *
 *Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *temp = *head;
	listint_t *fix = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
	free(temp);
	return (1);
	}

	while (p < index - 1)
	{
		if (temp || temp->next == NULL)
			return (-1);
		temp = temp->next;
		p++;
	}

	fix = temp->next;
	temp->next = fix->next;
	free(fix);

	return (1);

}
