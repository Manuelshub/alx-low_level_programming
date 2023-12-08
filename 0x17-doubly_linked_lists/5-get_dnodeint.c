#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list.
 * @head: pointer to the first node.
 * @index: the index of the node to be returned.
 * Return: the nth node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
