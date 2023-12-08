#include "lists.h"

/**
 * add_dnodeint_end - adds a new_node at the end of a list.
 * @head: the pointer to the first node of the list.
 * @n: the data part of the node.
 * Return: the address of the new node, else NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (head == NULL || *head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new_node->prev = temp;
	temp->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
