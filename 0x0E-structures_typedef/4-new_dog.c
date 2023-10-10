#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: pointer to the struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *n, *o;
	int len, len2, i;

	len = 0, len2 = 0;
	while (name[len])
		len++;
	while (owner[len2])
		len2++;
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	n = malloc(sizeof(char) * (len + 1));
	if (n == NULL)
	{
		free(ptr);
		return (NULL);
	}
	o = malloc(sizeof(char) * (len2 + 1));
	if (o == NULL)
	{
		free(ptr);
		free(n);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		n[i] = name[i];
	}
	for (i = 0; i <= len2; i++)
	{
		o[i] = owner[i];
	}
	ptr->name = n;
	ptr->age = age;
	ptr->owner = o;

	return (ptr);

}
