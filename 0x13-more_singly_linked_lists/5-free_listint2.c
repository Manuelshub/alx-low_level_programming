#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *n_temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		n_temp = (*head)->next;
		free(*head);
		*head = n_temp;
	}
	*head = NULL;
}
