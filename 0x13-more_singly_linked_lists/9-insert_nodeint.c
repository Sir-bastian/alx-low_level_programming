#include <stdio.h>
#include<stdio.h>
#include"lists.h"

/**
*insert_nodeint_at_index - Inserts a new node at a given position.
*
*@head: A pointer to address of listint_t list
*
*@idx: Index of the listint_t list where new node is to be added.
*
*@n: interger for new node to contain
*
*Return: NULL if function fails. Otherwise Address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *ptr = *head;
	unsigned int node;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = ptr;
		*head = newnode;
		return (newnode);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);

		ptr = ptr->next;
	}

	newnode->next = ptr->next;
	ptr->next = newnode;

	return (newnode);
}
