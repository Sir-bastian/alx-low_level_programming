#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
*add node -  adds a neew node
*@head: double pointer
*st: string for node
*Return : NULL if it fails, address of new element on success
*
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *anothernode;
	unsigned int len = 0;

	while (str[len])
		len++;

	anothernode = malloc(sizeof(list_t));
	if (anothernode == NULL)
		return (NULL);

	anothernode->str = strdup(str);
	anothernode->len = len;
	anothernode->next = (*head);
	(*head) = anothernode;

	return (*head);
}
