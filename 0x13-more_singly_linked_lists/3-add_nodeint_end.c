#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - adds a node at the end of a list
 *@head: linked list
 *@n: integer element of new node
 *Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
	{
		free(fresh);
		return (NULL);
	}
	fresh->n = n;
	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = fresh;

	return (fresh);
}
