#include "search_algos.h"

/**
 * linear_search- searches value in array using linear search algo
 * @array: array to search
 * @size: size of the array
 * @value: searched value
 *
 * Return: index of searched value found or -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t index = -1;
	size_t index_found = -1;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			index_found = index;
			break;
		}
		else
			index_found = -1;
	}
	return (index_found);
}
