#include "lists.h"

/**
 * insert_nodeint_at_index- add node at given position
 * @head: pointer to pointer to head
 * @idx: position of new node
 * @n: value of new node
 *
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *copy_head; /* copy because don't change head */
	listint_t *new_node; /* new node to add */
	unsigned int i;

	copy_head = (*head); /* copy head in copy_head */

	new_node = malloc(sizeof(listint_t)); /* allocate new node */
	if (new_node == NULL) /* verif allocation */
		return (NULL);

	new_node->n = n; /* put n data in new node */

	if (*head == NULL) /* if empty list */
	{
		(*head) = new_node;
		return (new_node);
	}

	if (idx == 0) /* add at the beginning */
	{
		new_node->next = copy_head; /* next new_node is head */
		*head = new_node; /* new_node became head */
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++) /* go to idx - 1 node */
	{
		if (copy_head != NULL) /* if it not the last node */
		{
			copy_head = copy_head->next; /* go next */
		}
		else
			return (NULL);
	}

	new_node->next = copy_head->next; /* input address next node in new_node */
	copy_head->next = new_node; /* input address new element in idx-1 element */

	return (new_node);
}
