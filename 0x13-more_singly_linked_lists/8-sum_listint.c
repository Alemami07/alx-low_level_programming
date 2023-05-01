#include "lists.h"
/**
 *sum_listint - returns sum of data in a list
 *@head: points to first element of list
 *
 * Return: sum of data or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *pseudo = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (pseudo)
	{
		sum += pseudo->n;
		pseudo = pseudo->next;
	}
	return (sum);
}
