#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	head = NULL;
}
