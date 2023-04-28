#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"
/**
 *add_node - adds node to list
 *@head: points to list
 *@str: string to be added
 *
 *Return: location of new element or Null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	unsigned int len;

	len = 0;

	while (str[len])
		len++;

	fresh = malloc(sizeof(list_t));

	if (!fresh)
		return (NULL);

	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = *head;
	*head = fresh;

	return (*head);

}
