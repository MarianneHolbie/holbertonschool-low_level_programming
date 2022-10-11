#include "main.h"
#include <stdio.h>

/**
 * print_array- function that prints n elements of an array of integers
 * @a: array
 * @n: number of elements of the array to be printed
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int len = 0, number, i;

	while (*(a + len) != '\0')
		len++;

	for (i = 0; i <= (n - 1); i++)
	{
		number = *(a + i);
		printf("%d", number);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

