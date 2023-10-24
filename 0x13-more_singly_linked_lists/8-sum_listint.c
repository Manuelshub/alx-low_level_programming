#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in the linked list.
 * @head: pointer to the first node.
 * Return: the sum of all data in teh linked list.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
