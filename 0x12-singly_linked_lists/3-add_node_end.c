#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_node_end - adds node to end of list
 *@head: points to list
 *@str: string to be included
 *
 *Return: location of new node or NUll
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh;
	list_t *temp = *head;
	unsigned int len;

	len = 0;

	while (str[len])
		len++;

	fresh = malloc(sizeof(list_t));

	if (fresh == NULL)
	{
		return (NULL);
	}

	fresh->str = strdup(str);
	fresh->len = len;
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
