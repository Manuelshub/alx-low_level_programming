#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index index.
 * @head: pointer to the first node.
 * @index: the index of the node.
 * Return: 1 i successful otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp, *main;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		temp = *head;
		while (temp && n < (index - 1))
		{
			if (temp == NULL)
				return (-1);
			temp = temp->next;
			n++;
		}
		if (temp == NULL || temp->next == NULL)
			return (-1);
		main = temp->next;
		temp->next = main->next;
		free(main);
	}
	return (1);
}
