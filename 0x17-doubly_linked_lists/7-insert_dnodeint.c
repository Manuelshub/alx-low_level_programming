#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index.
 * @h: pointer to the first node.
 * @idx: the index of where node is to be added.
 * @n: the data of the node.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		temp = *h;
		while (i < idx)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
			i++;
		}
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = temp;
		new_node->prev = temp->prev;
		if (temp->prev != NULL)
			temp->prev->next = new_node;
		temp->prev = new_node;
	}
	return (new_node);
}
