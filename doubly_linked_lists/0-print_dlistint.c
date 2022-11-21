#include "lists.h"

/**
 * print_dlistint- print all elements of a dlistint_t list
 * @h: pointer to head
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nbr_element = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr_element++;
	}
	return (nbr_element);
}
