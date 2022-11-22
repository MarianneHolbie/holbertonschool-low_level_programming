#include "lists.h"

/**
 * add_dnodeint_end- add node at the end of dlistint_t
 * @head: point to adress of head
 * @n: value of nue node
 *
 * Return: adress of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end_node; /* new end node */
	dlistint_t *last_node; /* previous last node before add */

	/*space to new node */
	new_end_node = malloc(sizeof(dlistint_t));
	last_node = (*head); /* to found last node */

	/* malloc test */
	if (new_end_node == NULL)
	{
		free(new_end_node);
		return (NULL);
	}

	/* initialize new_end_node */
	new_end_node->n = n;
	new_end_node->prev = NULL;
	new_end_node->next = NULL;

	/* if empty list */
	if (*head == NULL)
	{
		*head = new_end_node;
		return (new_end_node);
	}
	/* found previous last node */
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	/* change last node */
	last_node->next = new_end_node;
	new_end_node->prev = last_node;

	return (new_end_node);
}


