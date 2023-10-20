#include "lists.h"

/**
 * _strlen - calculates the length of a string.
 * @s: pointer to the string.
 * Return: length of the string.
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the actual head.
 * @str: pointer to the duplicated string.
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	/* Allocating memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* Assigning values to the new node */
	(*new_node).str = strdup(str);
	(*new_node).len = _strlen(str);

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		/* Traversing through the list */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
