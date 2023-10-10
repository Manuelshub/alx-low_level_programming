#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: pointer to the type struct dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nothing\n");
	else
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!(*d).age)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}	
}
