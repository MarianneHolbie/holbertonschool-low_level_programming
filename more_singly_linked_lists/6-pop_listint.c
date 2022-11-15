#include "lists.h"

/**
 * pop_listint- deletes head node + print nead node's data
 * @head: pointer to pointer to head
 *
 * Return: node's data
 */

int pop_listint(listint_t **head)
{
	/* create temporaly pointer to script */
	listint_t *temp;
	int data; /* for stock value of n before suppress node */

	if (head == NULL) /* case empty linked list */
		return (0);

	temp = (*head); /* stock first node */
	data = (*head)->n; /* stock data first node */

	(*head) = (*head)->next; /* transfer address next node to poiter head */

	free(temp); /* free space */

	return (data); /* return data delete node*/
}
