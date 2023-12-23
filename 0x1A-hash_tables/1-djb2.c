#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm
 * @str: the string to be hashed
 * Return: the hash code
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		if (isupper(c))
			c = c + 32;
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
