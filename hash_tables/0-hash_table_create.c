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
		return (NULL);

	table->size = size;

	return (table);
}
