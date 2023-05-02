#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Locates a given node of listtint_t list
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - Starting from 0.
 *
 * Return: NULL If the node does not exist
 *        Else return the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
