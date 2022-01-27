#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table, NULL on fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashArray;

	hashArray = malloc(sizeof(hash_table_t) * size);
		if (!hashArray)
			return (NULL);

	return (hashArray);
}
