#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns the
 *		head node's data.
 * @head:  pointer to the first node.
 * Return: the head node 's data.
 */
int pop_listint(listint_t **head)
{
	int var;
	listint_t *temp;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		var = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (var);
}
