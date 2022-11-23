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
	int c;
	unsigned long int i, sum = 0, index = 0;
	/* create new item value */
	hash_node_t *new_item;

	new_item = malloc(sizeof(hash_node_t));
	new_item->key = malloc(strlen(key) + 1);
	new_item->value = malloc(strlen(value) + 1);
	new_item->next = NULL;

	/* copy key and value) */
	strcpy(new_item->key, key);
	strcpy(new_item->value, value);

	/* convert key to ascii */
	for (i = 0; i < strlen(key); i++)
	{
		c = key[i];
		sum = sum + c;
	}
	index = sum % ht->size;

	if (ht->array[index] == NULL)
		ht->array[index] = new_item;

	return (1);
}

