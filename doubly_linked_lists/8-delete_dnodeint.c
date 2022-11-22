#include "lists.h"

/**
 * delete_dnodeint_at_index- delete node at index place
 * @head: pointer to adress head
 * @index: place node to delete
 *
 * Return: 1 if succeeded, or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy_head;
	unsigned int count = 0;

	copy_head = (*head);

	if (*head == NULL)
		return (-1);

	for (count = 0; copy_head != NULL && count < index; count++)
	{
		copy_head = copy_head->next;
	}
	if (copy_head == NULL)
		return (-1);

	if (*head == NULL || copy_head == NULL)
		return (-1);

	if (*head == copy_head)
		*head = copy_head->next;

	if (copy_head->next != NULL)
		copy_head->next->prev = copy_head->prev;

	if (copy_head->prev != NULL)
		copy_head->prev->next = copy_head->next;
	free(copy_head);
	return (1);
}
