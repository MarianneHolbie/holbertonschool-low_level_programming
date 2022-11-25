#include "hash_tables.h"

/**
 * create_hash_node- function that create a new hash node
 * @key: key of node
 * @value: value of node
 *
 * Return: adress of the new hash node
 */

hash_node_t *create_hash_node(const char *key, const char *value)
{
	char *dkey, *dvalue; /* for duplication */
	hash_node_t *new_node;

	/* duplicate and test */
	dkey = strdup(key);
	if (dkey == NULL)
		return (NULL);

	dvalue = strdup(value);
	if (dvalue == NULL)
	{
		free(dkey); /* free the key associate with null value */
		return (NULL);
	}

	/* allocate space and test */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dkey);
		free(dvalue);
		return (NULL);
	}

	/* put data */
	new_node->next = NULL;
	new_node->key = dkey;
	new_node->value = dvalue;
	return (new_node);
}


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
	char *dvalue;
	/* convert *key in unsigned to use with djb2 */
	const unsigned char *pkey = (const unsigned char *)(key);
	hash_node_t *temp;
	
	/* calcul of index value with djb2 algo */
	index = hash_djb2(pkey) % ht->size;

	/* temporary variable */
	temp = ht->array[index];

	/* move in hash table */
	while (temp)
	{
		/* compare key */
		if (strcmp(temp->key, key) == 0)
		{
			dvalue = strdup(value);
			if (dvalue == NULL)
				return (0);
			free(temp->value);
			temp->value = dvalue;
			return (1);
		}
		temp = temp->next;
	}

	/* if no index value in the table : create new */
	temp = create_hash_node(key, value); /* call function */
	if (temp == NULL)
		return (0);

	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
}
