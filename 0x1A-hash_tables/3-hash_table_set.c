#include "hash_tables.h"
/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to first node of the list
 * @key: key, string inside the node
 * @value: is the value associated with the key
 * Return: pointer to new node or NULL on fail
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;
	return (*head);
}



/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer de hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int k = 0;
	unsigned int size = 0;

	if (!key)
		return (0);
	if (!ht)
		return (0);
	size = ht->size;
	k = key_index((unsigned char *)key, size);
	if (add_node(&(ht->array[k]), key, value))
		return (1);
	return (0);
}
