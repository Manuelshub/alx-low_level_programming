#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position.
 * @head: pointer to the first node.
 * @idx: the index of the new node.
 * @n: the data to be parsed.
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int num = 0;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (num < (idx - 1))
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
			num++;
		}
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
