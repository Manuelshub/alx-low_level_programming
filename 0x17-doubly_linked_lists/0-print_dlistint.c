#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the pointer to the first node of the list.
 * Return: the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t num_nodes = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num_nodes += 1;
	}
	return (num_nodes);
}
