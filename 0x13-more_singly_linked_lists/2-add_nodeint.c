#include <stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a linked list.
* @n: Data for nodes of integer type
* @head: Address of new element
*
* Return: Address of new element on success or NUll on failure
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next =  NULL;
	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	*head = newnode;

	return (*head);
}
