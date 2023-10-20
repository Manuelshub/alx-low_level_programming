#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s: the pointer to the string.
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
 * add_node - adds a node at the beginning of a list_t list.
 * @head: double pointer to the actual head pointer.
 * @str: string to be duplicated.
 * Return: the address of the new node, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
