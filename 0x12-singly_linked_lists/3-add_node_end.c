#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to list_t
 * @str: string to put in the new node
 *
 * Return: address of new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Nodeadd;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	Nodeadd = malloc(sizeof(list_t));
	if (Nodeadd == NULL)
		return (NULL);

	Nodeadd->str = strdup(str);
	Nodeadd->len = len;
	Nodeadd->next = NULL;

	if (*head == NULL)
	{
		*head = Nodeadd;
		return (Nodeadd);
	}
	else
	{
		while (temp->next != NULL)
		temp = temp->next;

	temp->next = Nodeadd;
	}

	return (*head);
}
