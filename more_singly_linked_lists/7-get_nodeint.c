#include "lists.h"

/**
 * get_nodeint_at_index- return data of nth node
 * @head: pointer to head linked list
 * @index: number of the node to print
 *
 * Return: data of corresponding index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0; /* count element of liked list */

	if (head == NULL)
		return (NULL);

	for (count = 0; count < index; count++) /* run linked list trought nth */
	{
		if (head != NULL)
			head = head->next; /* next element */
		else
			return (NULL);
	}
	return (head); /* element found */
}
