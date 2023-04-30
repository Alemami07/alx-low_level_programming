#include "lists.h"

/**
 *add_nodeint - adds node at beginnig of a list
 *@head: pointer to first element of list
 *@n: data to be inserted
 *
 *Return: pointer to node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);

}
