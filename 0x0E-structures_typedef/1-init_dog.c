#include "dog.h"

/**
 * init_dog - iniatilzes a variable of type struct dog.
 * @d: pointer to the type struct dog.
 * @name: first member of the struct.
 * @age: second member.
 * @owner:third member.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (1)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
