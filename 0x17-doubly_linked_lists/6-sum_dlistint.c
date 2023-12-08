#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in the list.
 * @head: pointer to the first node.
 * Return: the sum of all the data in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
