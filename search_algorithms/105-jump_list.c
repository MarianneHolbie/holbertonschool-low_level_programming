#include "search_algos.h"

/**
 * jump_list- search value in sorted list using jump search algo
 * @list: single sorted linked list
 * @size: size of linked list
 * @value: searched value
 *
 * Return: index of searched value or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp;
	size_t jump, index;

	if (list == NULL || !size)
		return (NULL);

	index = 0;
	jump = sqrt(size);
	temp = list;

	/* List with 1 element*/
	if (size == 0 && temp->n != value)
		return (NULL);

	while (temp->n < value && index < size)
	{
		index = index + jump;
		list = temp;
		while (temp->index < index)
		{
			if (temp->next != NULL)
				temp = temp->next;
			else
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			list->index, temp->index);
	/* only on good part make linear search*/
	while (list->n <= value && list->index <= temp->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		if (list->next == NULL)
			return (NULL);
		list = list->next;
	}
	return (NULL);
}
