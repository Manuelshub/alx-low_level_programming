#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: element of the array.
 * @size: sizeof the type to be casted into.
 * Return: if nmemb or size = 0 or function fails return NULL
	otherwise return apointer to the array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int num;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (num = 0; num < nmemb; num++)
	{
		*((char *)ptr + num) = 0;
	}
	return (ptr);
}
