#include "lists.h"

/**
 * free_listint2- free listint ans set head NULL
 * @head: double poiter to head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp; /* temporary list */

	if (head == NULL) /* statement head alredy NULL */
		return;

	while (*head != NULL) /* if not null */
	{
		temp = (*head)->next; /* stock adress next node */
		free(*head); /* free */
		*head = temp; /* go to the next */
	}
	head = NULL; /* set head to NULL */
}
