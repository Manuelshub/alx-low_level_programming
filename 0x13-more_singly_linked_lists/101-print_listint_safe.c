#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0, i = 0;
	const listint_t *current = head;
	const listint_t *visit[1024];

	if (head == NULL)
		exit(98);

	while (current != NULL)
	{
		for (i = 0; i < n_nodes; i++)
		{
			if (current == visit[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}
		visit[n_nodes++] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	return (n_nodes);
}
