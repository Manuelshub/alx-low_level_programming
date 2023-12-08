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
		return (add_dnodeint(h, n));
	}
	else
	{
		temp = *h;
		while (i < idx)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
			i++;
		}
		if (temp->next == NULL)
			return (add_dnodeint_end(h, n));
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