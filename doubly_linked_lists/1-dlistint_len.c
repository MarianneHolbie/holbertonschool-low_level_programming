#include "lists.h"

/**
 * dlistint_len- count number of elements
 * @h: pointer to head
 *
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nbr_element = 0;

	while (h != NULL)
	{
		h = h->next;
		nbr_element++;
	}
	return (nbr_element);
}

