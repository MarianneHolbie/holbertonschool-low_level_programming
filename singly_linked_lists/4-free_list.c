#include "lists.h"

/**
 * free_list- free a list_t list
 * @head: point the head of the list
 *
 */

void free_list(list_t *head)
{
	/* create temporary list */
	list_t *tmp;

	/* read all element and free all value */
	while (head != NULL)
	{
		tmp = head->next; /*stock next value before erase */
		free(head->str);
		free(head);
		head = tmp; /* move to the next element */
	}
}
