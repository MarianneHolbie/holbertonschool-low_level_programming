#include "hash_tables.h"

/**
 * hash_table_delete- delete hash table
 * @ht: hash table to delete
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head_item;
	hash_node_t *next_item;

	if (ht == NULL || ht->array == NULL)
		exit(0);

	for (i = 0; i < ht->size; i++)
	{
		head_item = ht->array[i];
		while (head_item != NULL)
		{
			next_item = head_item->next;
			free(head_item->key);
			free(head_item->value);
			free(head_item);
			head_item = next_item;
		}
	}
	free(ht->array);
	free(ht);
}



