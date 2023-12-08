#include "lists.h"

/**
 * free_dlistint - frees a linked list.
 * @head: pointer to the first node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
