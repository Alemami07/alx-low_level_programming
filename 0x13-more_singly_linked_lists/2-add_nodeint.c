#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a node at begining of list
 * @head: points to list
 * @n: integer element of node
 * Return: address of new element, NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
	{
		free(fresh);
		return (NULL);
	}
	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
