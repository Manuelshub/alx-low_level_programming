#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to the first node.
 * @index: index of the node.
 * Return: the pointer to the nth node of the linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;
	listint_t *temp;

	num = 0;
	if (head != NULL)
	{
		temp = head;
		while (temp && num < index)
		{
			if (temp->next == NULL)
				return (NULL);
			temp = temp->next;
			num += 1;
		}
	}

	return (temp);
}
