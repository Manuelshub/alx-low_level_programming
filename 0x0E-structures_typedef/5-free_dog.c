#include "dog.h"
#include <stdlib.h>

/**
 * free - frees dog.
 * @d: pointer to the struct dog.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
