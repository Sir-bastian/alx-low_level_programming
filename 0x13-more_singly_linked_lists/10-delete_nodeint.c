#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
* delete_nodeint_at_index - deletes a node at given index of listint_t list.
*
*@head: Pointer to addres of head of the listint_t list.
*
*@index: index to be deleted. Indexes start at 0.
*
*Return: 1 ON SUCCESS, -1 IF IT FAILS.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr = *head;
	unsigned int mynode;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	for (mynode = 0; mynode < (index - 1); mynode++)
	{
		if (ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	return (1);
}
