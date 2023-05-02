#include<stdio.h>
#include "lists.h"
#include<stdlib.h>

/**
* free_listint - function that frees a linked list
*@head: listint_t to be freed
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while
	{
		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
}
