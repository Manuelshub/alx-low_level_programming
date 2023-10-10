#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - user defined data type.
 * @name: first member.
 * @age: second member.
 * @owner: third member.
 *
 * Description: this datatype is used to store the info of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* #ifndef DOG_H */
