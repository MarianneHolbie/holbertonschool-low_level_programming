#include "hash_tables.h"

/**
 * hash_table_set- add an element to the hash table
 * @ht: pointer to hash table you want add or update
 * @key: key
 * @value: value associated to the key
 *
 * Return: 1 if success, 0 otherwize
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	/* convert *key in unsigned to use with djb2 */
	const unsigned char *pkey = (const unsigned char *)(key);
	/* create new item value */
	hash_node_t *new_item;

	new_item = malloc(sizeof(hash_node_t));
	new_item->key = malloc(strlen(key) + 1);
	new_item->value = malloc(strlen(value) + 1);
	new_item->next = NULL;

	if (new_item == NULL || ht == NULL)
	{
		return (0);
	}

	/* copy value */
	strcpy(new_item->value, value);
	strcpy(new_item->key, key);

	/* calcul of index value with djb2 algo */
	index = hash_djb2(pkey) % ht->size;

	/* statement place at index is empty */
	if (ht->array[index] == NULL)
		ht->array[index] = new_item;

	else /* update value or new head linked list */
	{
		/*if (ht->array[index]->key == new_item->key)
			ht->array[index]->value = new_item->value; */
		if (strcmp(ht->array[index]->key, new_item->key) == 0)
		{
			ht->array[index]->value = new_item->value;
			return (1);
		}

		else
		{
			new_item->next = ht->array[index];
			ht->array[index] = new_item;
		}
	}
	return (1);
}
