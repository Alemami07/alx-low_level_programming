#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds node at beginning of a list
 * @head: head of list
 * @str: data in list
 * Return: new added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	unsigned int len;

	len = 0;
	while (str[len])
		len++;

	fresh = malloc(sizeof(list_t));

	if (!(fresh))
		return (NULL);

	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = *head;
	*head = fresh;

	return (*head);

}
