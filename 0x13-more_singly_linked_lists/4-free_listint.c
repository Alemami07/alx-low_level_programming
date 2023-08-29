#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - frees a list
 *@head: list to be freed
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
/*Temporarily store the next node somewhere then free the current one.*/
/*make the next node current*/
	while (head)
	{
		temp = head->next;
	free(head);
	head = temp;
	}
}
