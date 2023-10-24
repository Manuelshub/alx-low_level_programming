#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to the first node.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *current_node;

	prev_node = NULL;
	current_node = *head;
	if (*head == NULL || head == NULL)
		return (NULL);
	while (current_node != NULL)
	{
		*head = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = *head;
	}
	*head = prev_node;

	return (*head);
}
