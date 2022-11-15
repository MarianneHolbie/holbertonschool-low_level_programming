#include "lists.h"

/**
 * free_listint- fonction frees listint_t
 * @head: head node
 *
 */

void free_listint(listint_t *head)
{
	/* temporary listint */
	listint_t *temp;

	/* read all element and free all value */
	while (head != NULL)
	{
		temp = head->next; /* stock next value before erase */
		free(head);
		head = temp; /* move to the next element */
	}
}
