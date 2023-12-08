#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: pointer to the first node.
 * @n: the data element of the node.
 * Return: the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tail, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	tail = *head;
	new_node->n = n;
	new_node->next = tail;
	new_node->prev = NULL;
	if (tail != NULL)
		tail->prev = new_node;
	*head = new_node;

	return (new_node);
}
