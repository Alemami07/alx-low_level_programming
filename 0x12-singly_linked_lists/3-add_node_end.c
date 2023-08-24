#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a node at the end of a list
 * @head: point to list
 * @str: data to be contained in node
 * Return: new list
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

	if (!fresh)
		return (NULL);

/*store contents of the head node in a temporary node*/
/*create a new node and make it the new ending node*/
		fresh->str = strdup(str);
		fresh->len = len;
		fresh->next = NULL;
	if (*head == NULL)
	{
	*head = fresh;
	return (fresh); /*if head was empty reurn the new node*/
	}

	while (temp->next)
	temp = temp->next; /*head = temp->next*/
	temp->next = fresh;

	return (fresh);
}
