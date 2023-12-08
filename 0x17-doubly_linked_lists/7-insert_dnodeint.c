#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		temp = *h;
		while (i++ < idx && temp != NULL)
		{
			temp = temp->next;
		}
		if (temp != NULL)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev = new_node;
			if (new_node->prev != NULL)
				new_node->prev->next = new_node;
		}
	}
	return (new_node);
}
