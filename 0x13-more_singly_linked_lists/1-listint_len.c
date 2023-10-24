#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: pointer to the first node.
 * @Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t elems;
	const listint_t *t;

	t = h;
	elems = 0;
	while (t != NULL)
	{
		elems += 1;
		t = t->next;
	}

	return (elems);
}
