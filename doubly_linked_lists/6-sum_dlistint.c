#include "lists.h"

/**
 * sum_dlistint- sum all the data of list
 * @head: pointer to head node
 *
 * Return:sum or 0 if empty list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
