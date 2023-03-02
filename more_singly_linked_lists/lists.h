#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * struct listint_s- singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function that prints all the ellements of a list_t list */
size_t print_list(const list_t *h);
/* function that returns the number of elements in a linked list */
size_t list_len(const list_t *h);
/* function that adds a new node at the beginning of a list */
list_t *add_node(list_t **head, const char *str);
/* function adds a new node at the end of a list */
list_t *add_node_end(list_t **head, const char *str);
/* function that free a list_t list */
void free_list(list_t *head);
/* prints all the elements of a listint_t */
size_t print_listint(const listint_t *h);
/* prints number of elements in a linked list */
size_t listint_len(const listint_t *h);
/* add a new node at the beginning of a linked list */
listint_t *add_nodeint(listint_t **head, const int n);
/* add new node at the end of a linked list */
listint_t *add_nodeint_end(listint_t **head, const int n);
/* frees listint_t */
void free_listint(listint_t *head);
/* frees a listint_t and set head NULL */
void free_listint2(listint_t **head);
/* deletes head node, return head node's data n */
int pop_listint(listint_t **head);
/* return the nth node of a linked list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* sum of all data(n) of a linked list */
int sum_listint(listint_t *head);
/* inserts node at given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* delete node at index of list */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* ADVANCED */
/* reverses listinct_t linked list*/
listint_t *reverse_listint(listint_t **head);
/* print listint_t linked list*/
size_t print_listint_safe(const listint_t *head);

#endif
