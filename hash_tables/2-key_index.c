#include "hash_tables.h"

/**
 * key_index- give the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index at with key/value pair be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* index = sum (ascii string) modulo size */
	return (hash_djb2(key) % size);

}

