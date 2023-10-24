#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first node.
 */
void free_listint(listint_t *head)
{
	listint_t *n_temp;

	while (head != NULL)
	{
		n_temp = head->next;
		free(head);
		head = n_temp;
	}
}
