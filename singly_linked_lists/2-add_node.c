#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node- add new node at the beginning
 * @head: first node
 * @str: value of new node
 *
 * Return: address of new node or Null if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copy; /* copy of string */
	list_t *new_node; /* new element */

	/* allocate node */
	new_node = malloc(sizeof(list_t));

	/* test malloc */
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	copy = strdup(str); /* copy the string */

	/* put new data */
	new_node->str = copy;
	new_node->len = strlen(copy); /* length of string */

	/* make next of new node as head */
	new_node->next = (*head);

	/* move the head to point to the new node */
	(*head) = new_node;

	return (new_node);

	free(new_node);
	free(copy);
}
