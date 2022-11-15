#include "lists.h"

/**
 * sum_listint- sum of all n of liked list
 * @head: pointer to first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum_all = 0; /* initialize sum */

	if (head == NULL) /* if linked list empty return 0*/
		return (0);

	while (head != NULL) /* read linked list */
	{
		sum_all = sum_all + head->n; /* incremente sum_all up n */
		head = head->next; /* go to the next node */
	}
	return (sum_all);
}
