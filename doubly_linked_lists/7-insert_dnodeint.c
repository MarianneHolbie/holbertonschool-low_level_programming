#include "lists.h"

/**
 * insert_dnodeint_at_index- insert node at index place
 * @h: point to adress of head
 * @idx: place of new node
 * @n: data of new node
 *
 * Return: adress new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i;

	if (h == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	/* case add at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp && i < idx; i++)
		temp = temp->next;
	/* add at the end */
	if (temp == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	/* in other case */
	else if (temp != NULL)
	{
		temp->prev->next = new_node;
		new_node->prev = temp->prev;
		temp->prev = new_node;
		new_node->next = temp;
		return (new_node);
	}
	return (NULL);
}
