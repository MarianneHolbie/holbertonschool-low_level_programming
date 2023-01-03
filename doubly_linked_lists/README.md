# PROJECT DOUBLY LINKED LISTS

![img](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQfAZjbLSmZzBkhZ2dIiHT4kI0H_tn9cs5iUw&usqp=CAU)

## Description
Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous as well as the next node in the sequence. Therefore, in a doubly linked list, a node consists of three parts: node data, pointer to the next node in sequence (next pointer) , pointer to the previous node (previous pointer). A sample node in a doubly linked list is shown in the figure.

## Headers
```c
#include<stdio.h>  
#include<stdlib.h> 
```

## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`

## More Info
### Data Structures
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
```

-------------------------

## Files
All of the following files are scripts and programs written in C:

| Filename | Description |
| -------- | ----------- |
| `0-print_dlistint.c` | Prints all the elements of a `dlistint_t` list |
| `1-dlistint_len.c` | Returns the number of elements in a linked `dlistint_t` list |
| `2-add_dnodeint.c` | Adds a new node at the beginning of a `dlistint_t` list |
| `3-add_dnodeint_end.c` | Adds a new node at the end of a `dlistint_t` list |
| `4-free_dlistint.c` | Frees a `dlistint_t` list |
| `5-get_dnodeint.c` | Returns the nth node of a `dlistint_t` linked list |
| `6-sum_dlistint.c` | Returns the sum of all the data (n) of a `dlistint_t` linked list |
| `7-insert_dnodeint.c` | Inserts a new node at a given position |
| `8-delete_dnodeint.c` | Deletes the node at index `index` of a `dlistint_t` linked list |
