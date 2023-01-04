#include "search_algos.h"

/**
 * interpolationSearch- search value in sorted array with interpol search algo
 * @array: sorted array
 * @low: low index of array
 * @high: high index of array
 * @value: searched value
 *
 * Return: index of value or -1
 */

int interpolationSearch(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	if (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		/* value found*/
		if (array[pos] == value)
			return (pos);
		/* value is in the right sub array*/
		if (array[pos] < value)
			return (interpolationSearch(array, pos + 1, high, value));
		/* value is in the left sub array*/
		if (array[pos] > value)
		{
			return (interpolationSearch(array, low, pos - 1, value));
		}
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

/**
 * interpolation_search- search value in sorted array with interpol search algo
 * @array: sorted array
 * @size: size of array
 * @value: searched value
 *
 * Return: index of value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;
	int result;

	if (array == NULL || !size)
		return (-1);

	low = 0;
	high = size - 1;

	result = interpolationSearch(array, low, high, value);
	return (result);
}
