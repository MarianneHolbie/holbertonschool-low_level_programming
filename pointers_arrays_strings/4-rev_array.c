#include <stdio.h>
#include "main.h"

/**
 * reverse_array- reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of element of the array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int value, i, j = 0;

	j = n - 1;

	for (i = 0; i < (j / 2); i++)
	{
		value = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = value;
		j--;
	}
}
