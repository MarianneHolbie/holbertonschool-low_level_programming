#include "main.h"

/**
 * swap_int- swap the values of two interger
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	/* stock value of a */
	int value_a;

	value_a = *a;

	/* affect value b in a */
	*a = *b;
	/* affect value de a stocked in value_a in b */
	*b = value_a;
}
