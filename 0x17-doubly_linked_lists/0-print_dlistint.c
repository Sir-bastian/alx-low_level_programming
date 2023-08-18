#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - A function that prints elements of a dlisint.
 * @h: The pointer pointing to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	ssize_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
