#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: pointer to the first node.
 * Return: the number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		num_nodes++;
	}
	return (num_nodes);
}
