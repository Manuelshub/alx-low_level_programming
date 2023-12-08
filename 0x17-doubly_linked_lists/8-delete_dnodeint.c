#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	while (index != 0)
	{
		if (temp == NULL)
			return (-1);
		temp =temp->next;
		index--;
	}	
	if (temp == *head)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp;
	}
	free(temp);
	return (1);
}
