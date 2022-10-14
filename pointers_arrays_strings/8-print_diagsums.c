#include <stdio.h>
#include "main.h"

/**
 * print_diagsums- prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 *
 * Return: 0
 */

/* Tips : to move to the next line +size per line */
void print_diagsums(int *a, int size)
{
	int sum = 0, position = 0, sum2 = 0, position2 = 0;

	/* loop for the sum to the first diagonal */
	for (position = 0; position < size * size; position++)
	{
		sum = sum + *(a + position);
		position = position + size;
	}
	printf("%d, ", sum);

	/* loop for the sum to the second diagonal */
	for (position2 = (size * size) - size;  position2 > 0; position2++)
	{
		sum2 = sum2 + *(a + position2);
		position2 = position2 - size;
	}
	printf("%d\n", sum2);
}
