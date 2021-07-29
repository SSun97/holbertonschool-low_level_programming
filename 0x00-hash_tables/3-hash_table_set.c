#include "hash_tables.h"

/**
 * hash_table_set - sets a value in hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index = 0;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
