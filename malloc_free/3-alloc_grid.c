#include "main.h"
#include <stdio.h>
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
	int **ar2d, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* firt array of pointer */
	ar2d = (int **) malloc(height * sizeof(int *));

	if (ar2d == NULL)
	{
		return (NULL);
		free(ar2d);
	}

	/* array of array */
	for (i = 0; i < height; i++)
	{
		ar2d[i] = (int *) malloc(width * sizeof(int));
		if (ar2d[i] == NULL)
		{
			return (NULL);
			free(ar2d[i]);
		}
	}
	return (ar2d);
}
