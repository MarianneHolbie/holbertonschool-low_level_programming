#include "lists.h"

/**
 * add_node_end- add new node at the end
 * @head: first node
 * @str: string
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *copy; /* copy of string */
	list_t *new_end_node; /* new element */
	list_t *last_node; /* last element */

	copy = strdup(str); /* copy of string */

	/* allocate node */
	new_end_node = malloc(sizeof(list_t));
	last_node = *head; /* used after to found last element */

	/* test malloc */
	if (new_end_node == NULL || last_node == NULL || copy == NULL)
	{
		free(new_end_node);
		return (NULL);
	}

	/* put new data */
	new_end_node->str = copy;
	new_end_node->len = strlen(copy);
	new_end_node->next = NULL; /* end node, no next */

	/* if the linked list empty, the end = the first */
	if (*head == NULL)
	{
		*head = new_end_node;
		return (new_end_node);
	}

	/* found the last node */
	while (last_node->next != NULL)
		last_node = last_node->next;

	/* change next with last node */
	last_node->next = new_end_node;
	return (new_end_node);

}
