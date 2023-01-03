# Project Hash Table

![img](https://media.geeksforgeeks.org/wp-content/cdn-uploads/implementing-own-hash-table.png)

## Description
A Hash Table in C/C++ (Associative array) is a data structure that maps keys to values. This uses a hash function to compute indexes for a key.
Based on the Hash Table index, we can store the value at the appropriate location.
If two different keys get the same index, we need to use other data structures (buckets) to account for these collisions.

## Headers
```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
```

## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- You are allowed to use the C standard library

## More Info
### Data Structures
```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
```

-------------------------

## Files
All of the following files are scripts and programs written in C:

| Filename | Description |
| -------- | ----------- |
| `0-hash_table_create.c` | Function that creates a hash table |
| `1-djb2.c` | Function that executes the djb2 algorithm |
| `2-key_index.c` | Function that returns the index of a key |
| `3-hash_table.c` | Function that adds an element to the hash table |
| `4-hash_table_get.c` | Function that retrieves a value associated with a key |
| `5-hash_table_print.c` | Function that prints a hash table |
| `6-hash_table_delete.c` | Function that deletes a hash table |
