#include "lists.h"

/**
 * add_nodeint_end- add node at the end
 * @head: head of list
 * @n: value to add
 *
 * Return: address or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node; /* new element */
	listint_t *last_node; /* last element */

	new_end_node = malloc(sizeof(listint_t));
	last_node = (*head); /* used to found the last element */

	/* test malloc */
	if (new_end_node == NULL)
	{
		free(new_end_node);
		return (NULL);
	}

	/* put the data */
	new_end_node->n = n;
	new_end_node->next = NULL;

	/* statement list empty ? */
	if (*head == NULL)
	{
		*head = new_end_node;
		return (new_end_node);
	}

	/* found last node */
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	/* change next with last node */
	last_node->next = new_end_node;

	return (new_end_node);
}
