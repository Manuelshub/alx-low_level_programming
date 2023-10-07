#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated.
 * @old_size: size in bytes allocated for ptr.
 * @new_size: size in bytes for the new memory block.
 * Return: pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*((char *)new + i) = *((char *)ptr + i);
	}

	free(ptr);

	return (new);
}
