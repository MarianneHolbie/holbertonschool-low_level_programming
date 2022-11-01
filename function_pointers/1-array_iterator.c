#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator- function that execute function on eache element of an array
 * @array: array of element
 * @size: length of the array
 * @action: pointer to function to use
 *
 * Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
