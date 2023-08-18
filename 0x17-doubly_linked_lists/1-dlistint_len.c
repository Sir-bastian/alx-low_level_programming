#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements
 *		in a linked list
 * @h: A pointer that points to the list.
 *
 * Return: Number of elements in a linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	ssize_t nodes = 0;

	if (h != NULL)
	{
		return (0);
	}
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
