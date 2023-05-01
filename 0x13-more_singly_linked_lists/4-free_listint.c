#include "lists.h"

/**
 *free_listint - frees listint_t
 *@head: pointer to list
 *
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
	free(head);
	head = temp;
	}
}
