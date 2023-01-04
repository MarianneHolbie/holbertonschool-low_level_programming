#include "search_algos.h"


/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @low: low index in the array
 * @high: high index in the array
 */
void print_array(const int *array, size_t low, size_t high)
{
	size_t i;

	i = low;
	while (array && i <= high)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
		++i;
	}
	printf("\n");
}


/**
 * binary_search- searches in sorted array with binary search algo
 * @array: sorted array
 * @size: size of array
 * @value: searched value
 *
 * Return: index where value found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index;
	size_t middle;
	int low, high;

	if (array == NULL || !size)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		middle = (low + high) / 2;

		if (value == array[middle])
		{
			index = middle;
			return (index);
		}
		else if (value < array[middle])
		{
			high = middle - 1;
			size = (middle - 1) - low;
		}
		else if (value > array[middle])
		{
			low = middle + 1;
			size = high - (middle + 1);
		}
	}
	return (-1);
}
