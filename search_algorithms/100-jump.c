#include "search_algos.h"

/**
 * jump_search- search value with jump search algo
 * @array: sorted array to search
 * @size: size of array
 * @value: searched value
 *
 * Return: index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t index, high, jump;

	if (array == NULL || size == 0)
		return (-1);

	high = 0;
	jump = sqrt(size); /* jump step*/

	for (index = high; high < size && array[high] < value; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		index = high;
		high = high + jump; /* successiv jump*/
	}
	index = index - 1; /* compensed +1 during for loop*/
	printf("Value found between indexes [%ld] and [%ld]\n", index, high);

	if (high < size - 1)
		high = high;
	else
		high = size - 1;

	for (; index < high && array[index] < value; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);

	if (array[index] == value)
		return (index);
	else
		return (-1);
}
