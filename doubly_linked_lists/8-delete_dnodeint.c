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
	dlistint_t *copy_head, *temp;
	unsigned int count = 0;

	copy_head = (*head);

	if (copy_head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head) = (*head)->next;
			free(copy_head);
			return (1);
		}
		else
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}
		while (head && count < index)
		{
			temp = copy_head;
			if (copy_head->next)
			{
				copy_head = copy_head->next;
				count++;
			}
			else
				return (-1);
		}

		temp->next = copy_head->next;
		free(copy_head);
		return (1);
}
