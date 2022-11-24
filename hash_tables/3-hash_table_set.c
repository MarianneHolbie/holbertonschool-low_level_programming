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
	char *dkey, *dvalue;
	/* convert *key in unsigned to use with djb2 */
	const unsigned char *pkey = (const unsigned char *)(key);
	/* create new item value */
	hash_node_t *new_item;

	new_item = malloc(sizeof(hash_node_t));
	dkey = strdup(key);
	if (dkey == NULL)
		return (0);
	new_item->key = dkey;
	dvalue = strdup(value);
	if (dvalue == NULL)
		return (0);
	new_item->value = dvalue;
	new_item->next = NULL;
	if (new_item == NULL || ht == NULL)
	{
		free(new_item);
		return (0);
	}
	/* calcul of index value with djb2 algo */
	index = hash_djb2(pkey) % ht->size;
	/* statement place at index is empty */
	if (ht->array[index] == NULL)
		ht->array[index] = new_item;
	else /* update value or new head linked list */
	{
		if (strcmp(ht->array[index]->key, new_item->key) == 0)
		{
			ht->array[index]->value = new_item->value;
			return (1);
		}
		else
		{	new_item->next = ht->array[index];
			ht->array[index] = new_item;
		}
	}
	return (1);
}
