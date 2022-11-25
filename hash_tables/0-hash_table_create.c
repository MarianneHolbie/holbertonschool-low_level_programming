#include "hash_tables.h"

/**
 * hash_table_create- function that create hash table
 * @size: size of the array
 *
 * Return: pointer to the newly hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* create table type struct */
	hash_table_t *table;

	/* allocation space memory */
	table = malloc(sizeof(hash_table_t));
	/* test malloc */
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
