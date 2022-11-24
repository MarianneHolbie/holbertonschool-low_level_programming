#include "hash_tables.h"

/**
 * hash_table_print- function that print a hash table
 * @ht: table to print
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next != NULL)
				printf(", ");
		}
		if (ht->array[i + 1] != NULL)
			printf(", ");
	}
	printf("}\n");
}
