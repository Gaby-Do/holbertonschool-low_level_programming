#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k = 0;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	k = key_index((unsigned char *)key, ht->size);
	if (ht->array[k] == NULL)
		return (NULL);
	if (strcmp(ht->array[k]->key, key) == 0)
		return (ht->array[k]->value);
	return (NULL);
}
