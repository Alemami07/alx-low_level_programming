#include "lists.h"

/**
 *pop_listint - frees list and returns data in it
 *@head: points to list
 *
 * Return: data in list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);

	*head = temp;

	return (data);
}
