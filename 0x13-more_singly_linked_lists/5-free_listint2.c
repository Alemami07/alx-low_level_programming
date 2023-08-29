#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint list
 * @head: double pointer to list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
	free(*head);
	(*head) = temp;
	}
	*head = NULL;
}
