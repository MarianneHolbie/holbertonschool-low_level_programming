#include "lists.h"

/**
 * delete_nodeint_at_index- delete node at index place
 * @head: pointer to pointer to head
 * @index: place of node to delete
 *
 * Return: 1 if success or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy_head, *temp; /* copy head, stok delete node*/
	unsigned int count = 0; /* to move */

	copy_head = (*head); /* stock head */

	if (copy_head == NULL) /* linked list empty */
		return (-1);

	if (index == 0) /* special case delete beginning */
	{
		(*head) = (*head)->next; /* head become the second */
		free(copy_head); /* free copy */
		return (1);
	}

	while (head && count < index)
		/* go to rigth place */
	{
		temp = copy_head; /* stok */
		copy_head = copy_head->next; /* go next */
		count++; /* count */
	}
	if (count < index)
		return (-1);

	temp->next = copy_head->next; /* stock adress */
	free(copy_head);
	return (1);
}
