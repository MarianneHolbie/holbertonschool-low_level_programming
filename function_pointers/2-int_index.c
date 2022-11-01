#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index- function that searches integer with different function called
 * @array: array to search element corresponding
 * @size: size of array
 * @cmp: pointer to function called
 *
 * Return: position of element, or -1 if no element or size <=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* case of size <= 0 */
	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		/* read each element of the array */
		for (i = 0; i < size; i++)
		{
			/* apply function */
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
