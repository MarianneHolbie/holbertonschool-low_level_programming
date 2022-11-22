#include "lists.h"

/**
 * get_dnodeint_at_index- return nth node
 * @head: pointer to head
 * @index: place of node
 *
 * Return: adress of node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *indexnode;
	unsigned int i;

	indexnode = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (indexnode != NULL)
			indexnode = indexnode->next;
		else
			return (NULL);
	}

	return (indexnode);
}
