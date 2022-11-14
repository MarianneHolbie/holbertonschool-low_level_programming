#include "lists.h"

/**
 * print_listint- prints all the elements
 * @h: list
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
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
