#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: the array or Null if weight or height are null or negativ
 */

int **alloc_grid(int width, int height)
{
	int **ar2d;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar2d = malloc(width * sizeof(int *));

	if (ar2d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		ar2d[i] = malloc(height * sizeof(int));
	}
	return (ar2d);
}
