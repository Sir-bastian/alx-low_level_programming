#include<stdio.h>
#include"lists.h"
#include<stdlib.h>

/**
*pop_listint - Deletes head node of listint_t linked list.
*@head: Pointer to address of listint_t list.
*
*Return: Head nodes data(n), (0) if linked list is empty.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
