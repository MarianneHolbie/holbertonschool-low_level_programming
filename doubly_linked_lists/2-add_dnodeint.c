#include "lists.h"

/**
 * add_dnodeint- add node at the beginning of double list linked
 * @head: pointer in adresse of head
 * @n: value of node
 *
 * Return: adress of new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* new node to add */

	/* allocate space to new_node */
	new_node = malloc(sizeof(dlistint_t));

	/* test malloc */
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n; /* new data to new node */

	new_node->prev = NULL; /* head point prev to NULL */

	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	new_node->next = (*head); /* new node is new head */

	(*head)->prev = new_node; /* prev node of ex head is new_node address */

	(*head) = new_node; /* new_node is the new_head */

	return (new_node);
}
