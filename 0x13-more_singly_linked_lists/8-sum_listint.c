#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns sum of dat in a listint
 * @head: this is the linked list
 * Return: sum of data || 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
	sum += head->n;
	temp = head->next;
	head = temp;
	}
	return (sum);

}
