#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value assocoated with a key.
 * @ht: the hash table to look at.
 * @key: the key to be looked for.
 * Return: the value associated with the key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
