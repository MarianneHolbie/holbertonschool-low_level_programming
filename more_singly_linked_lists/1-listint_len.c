#include "lists.h"

/**
 * listint_len- count number of element in linked list
 * @h: list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nbr_element;

	nbr_element = 0;

	while (h != NULL)
	{
		h = h->next;
		nbr_element++;
	}
	return (nbr_element);
}
