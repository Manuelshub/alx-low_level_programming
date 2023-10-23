#include "lists.h"

/**
 * print_listint - prints all the elements if a listint_t list.
 * @h: Pointer to the first node.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t nodes = 0;

	if (h)
	{
		temp = h;
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			nodes += 1;
		}
	}

	return (nodes);
}
