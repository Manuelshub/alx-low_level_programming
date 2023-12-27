#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table.
 * @size: the size of the hash table.
 * Return: the address of the allocated memory.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = calloc(table->size, sizeof(shash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: the hash table.
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if successful otherwise 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->snext = NULL;
	new_node->sprev = NULL;
	tmp = ht->array[index];
	if (tmp == NULL || strcmp(key, tmp->key) < 0)
	{
		new_node->snext = tmp;
		if (tmp != NULL)
			tmp->sprev = new_node;
		ht->array[index] = new_node;
	}
	else
	{
		current = ht->array[index];
		while (current->snext != NULL && strcmp(current->snext->key, key) > 0)
			current = current->snext;
		new_node->snext = current->snext;
		new_node->sprev = current;
		if (current->snext != NULL)
			current->snext->sprev = new_node;
		current->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - retrieves an element in the hash table.
 * @ht: the hash table.
 * @key: the key to be retrieved.
 * Return: the value associated with the key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the content of a hash table
 * @ht: the hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp;
	int print = 1;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (!print)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			print = 0;
			tmp = tmp->snext;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the hash table in reverse order.
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp;
	int print = 1;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = ht->size; i > 0; i--)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (!print)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			print = 0;
			tmp = tmp->snext;
		}
	}
	printf("}\n");
}

/**
 * free_shash_list - frees a node.
 * @node: the node to be freed.
 */
void free_shash_list(shash_node_t *node)
{
	shash_node_t *tmp;

	while (node != NULL)
	{
		tmp = node;
		node = node->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: the hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
		free_shash_list(ht->array[i]);
	free(ht->array);
	free(ht);
}
