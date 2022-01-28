#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer de hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k = 0;
	unsigned long int size = 0;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	size = ht->size;
	k = key_index((unsigned char *)key, size);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[k];
	ht->array[k] = new;
	return (1);
}
