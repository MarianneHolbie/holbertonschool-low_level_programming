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
	listint_t *copy_head; /* copy head */
	listint_t *delete_node; /* stock delete node */
	unsigned int count;

	copy_head = (*head);
	delete_node = malloc(sizeof(listint_t)); /* allocate space */
	if (delete_node == NULL || copy_head == NULL)
	{
		free(copy_head);
		free(delete_node);
		return (-1);
	}

	if (head == NULL && index == 0) /* special case no list */
		return (-1);

	if (index == 0) /* special case delete beginning */
	{
		(*head) = (*head)->next; /* head become the second */
		free(copy_head); /* free copy */
		free(delete_node);
		return (1);
	}
	for (count = 0; count < (index - 1); count++)
		/* only index-1 because ->next is delete node */
	{
		if (copy_head != NULL)
			copy_head = copy_head->next;
		else
		{
			free(copy_head);
			free(delete_node);
			return (-1); /* if out list */
		}
	}
	delete_node = copy_head->next; /* stock adress */
	copy_head->next = delete_node->next; /* affect address */
	free(delete_node);
	free(copy_head);
	return (1);
}
