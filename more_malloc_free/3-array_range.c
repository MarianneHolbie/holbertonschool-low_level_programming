#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range- create an array of integers
 * @min: minimal value
 * @max: maximal value
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *pAr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pAr = malloc(size * sizeof(int));

	if (pAr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		pAr[i] = min;
		min++;
	}
	return (pAr);
}


