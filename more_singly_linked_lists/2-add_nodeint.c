#include "lists.h"

/**
 * add_nodeint- add new node at the beginning
 * @head: pointer the head of linked list
 * @n: element to add
 *
 * Return: address new element or Null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* new element */

	/* allocate node */
	new_node = malloc(sizeof(listint_t));

	/* test malloc */
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* put new data */
	new_node->n = n;

	/* make nest of new node as head */
	new_node->next = (*head);

	/* move the head to point to the new node */
	(*head) = new_node;

	return (new_node);
}
