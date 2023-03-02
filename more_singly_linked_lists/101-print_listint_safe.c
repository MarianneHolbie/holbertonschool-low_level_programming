#include "lists.h"

/**
 * print_listint_safe- print linked list
 * @head: pointer to pointer to head
  *
 * Return: number of node
 */



size_t print_listint_safe(const listint_t *head)
{
	unsigned int nbr_element = 0;
	const listint_t *current;

	current = head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nbr_element++;
		if (current == NULL)
			exit(98);
	}
	return (nbr_element);
}
