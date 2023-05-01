#include<stdlib.h>
#include<stdio.h>
#include "lists.h"

/**
*add_nodeint_end - Function to add a node at the end.
*@n: An interger value for node data.
*@head: A pointer to the address of listint_t list.
*
*Return: The address of new element or NULL on failure.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}

	return (*head);
}
