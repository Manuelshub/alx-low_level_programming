#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list.
 * @h: pointer to the first node.
 * Return: number of nodes in a linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
