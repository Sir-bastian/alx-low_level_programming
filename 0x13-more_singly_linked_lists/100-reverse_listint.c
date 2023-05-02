#include"lists.h"
#include<stdio.h>
#include<stdlib.h>

/**
*reverse_listint - Reverses a listint_t list.
*
*@head: Pointer to address of head of listint list
*
*Return: Pointer to the first node of reversed list
*/



listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *bakward;

	if (head == NULL || *head == NULL)
		return (NULL);

	bakward = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = bakward;
		bakward = *head;
		*head = front;
	}

	(*head)->next = bakward;

	return (*head);
}
