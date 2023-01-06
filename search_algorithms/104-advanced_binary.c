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
	printf("Searching in array: ");
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
 * binarySearch- binary search algo
 * @array: sorted array
 * @value: searched value
 * @low: low interval value
 * @high: high interval value
 *
 * Return: index of value or -1
 */

int binarySearch(int *array, int value, int low, int high)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);
	mid = (low + high) / 2;

	if (value == array[mid] && array[mid - 1] != value)
		return (mid);

	if (value <= array[mid])
		high = mid;
	else
		low = mid + 1;

	return (binarySearch(array, value, low, high));
}

/**
 * advanced_binary- advanced binary search algo
 * @array: sorted array
 * @size: size of array
 * @value: searched value
 *
 * Return: index of value or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;

	if (array == NULL || !size)
		return (-1);

	low = 0;
	high = size - 1;


	return (binarySearch(array, value, low, high));
}
