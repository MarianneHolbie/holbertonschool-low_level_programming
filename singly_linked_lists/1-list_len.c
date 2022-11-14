#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * list_len- prints number of element in a linked list
 * @h:pointer to linked list
 *
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	unsigned int number;

	number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
