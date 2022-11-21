#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

/* function that prints all elements of a dlintint_t list */
size_t print_dlistint(const dlistint_t *h);
/* returns the number of elements in a linked dlistint_t list */
size_t dlistint_len(const dlistint_t *h);

#endif
