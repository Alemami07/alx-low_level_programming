#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint -  deletes a node at head and returns data in it
 *@head: list
 *Return: data in deleted node
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (!head || !(*head))
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return (num);
}
