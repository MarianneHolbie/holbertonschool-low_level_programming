#include "lists.h"

/**
 * reverse_listint- reverse linked list
 * @head: pointer to pointer to head
  *
 * Return: reverse linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	prev = NULL;
	next = NULL;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
