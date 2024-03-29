#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: pointer to the type struct dog.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(*d).name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if ((*d).age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (!(*d).owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
