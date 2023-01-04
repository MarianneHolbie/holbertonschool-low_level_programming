#include "search_algos.h"

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
	int mid, index;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (index = low; index < high; index++)
		printf("%d, ", array[index]);
	printf("%d\n", array[index]);
	if (value == array[mid])
		return (mid);
	else if (value > array[mid])
		return (binarySearch(array, value, mid + 1, high));
	else
		return (binarySearch(array, value, low, high - 1));
}


/**
 * exponential_search- search in array with exponential search algo
 * @array: sorted array
 * @size: size of array
 * @value: searched value
 *
 * Return: index of value or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, high;

	if (array == NULL || !size)
		return (-1);

	while ((size_t)bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound = bound * 2;
	}

	if ((size_t)bound + 1 < size)
		high = bound + 1;
	else
		high = size;
	printf("Value found between indexes [%d] and [%d]\n", bound / 2, high - 1);
	return (binarySearch(array, value, bound / 2, high - 1));

}
