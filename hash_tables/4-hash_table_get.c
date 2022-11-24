#include "hash_tables.h"

/**
 * hash_table_get- retrieve a value associated with a key
 * @ht: hash table where search
 * @key: the key you are looking for
 *
 * Return: index value of element or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *item;

	if (ht == NULL)
		return (NULL);
	/* generate index value corresponding to key */
	index = key_index((const unsigned char *)key, ht->size);

	item = ht->array[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);
}

