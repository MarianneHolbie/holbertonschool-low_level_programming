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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	for (i = 0; i < idx + 1; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			i++;
		}
		if (i == idx)
		{
			temp->prev = new_node;
		}
		temp = temp->next;
	}

	return (new_node);
}
