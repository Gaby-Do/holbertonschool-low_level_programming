#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head = NULL;
	hash_node_t *temp = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while ((temp = head) != NULL)
		{
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
