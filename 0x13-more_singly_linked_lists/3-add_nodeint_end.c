#include "lists.h"

/**
 *add_nodeint_end - adds node at end of a list
 *@head: points to first element of list
 *@n: data to be included in list
 *
 *Return: pointer to added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *temp = *head;

	fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

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
