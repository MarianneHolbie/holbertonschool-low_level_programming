#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list- prints all the element of a list
 * @h: pointer on list_t struct
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0; /* compter */

	/* parcours la list jusqu'au dernier élément */
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);

		/* affecte l'élement suivant */
		h = h->next;
		}
		else
		{
			printf("[%d] (nil)\n", h->len);
			h = h->next;
		}
	}
	return (count);
}
