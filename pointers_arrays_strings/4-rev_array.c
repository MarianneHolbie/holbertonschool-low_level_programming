#include <stdio.h>
#include "main.h"

/**
 * reverse_array- reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of element of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int value, i;

	/* swap character from 0 to half length string */
	for (i = 0; i < (n - 1); i++)
	{
		value = *(a + i);
		*(a + i) = *(a + (n - 1));
		*(a + (n - 1)) = value;
		n--;
	}
}
