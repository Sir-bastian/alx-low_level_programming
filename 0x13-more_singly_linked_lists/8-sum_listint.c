#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
*sum_listint - Calculates the sum of listint_t list
* @head: A pointer to the head of the listint_t list.
*
*Return: Sum or 0 if list is empty.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
