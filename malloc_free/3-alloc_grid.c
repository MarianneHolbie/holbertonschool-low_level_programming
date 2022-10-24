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
	unsigned int w, h;

	w = (unsigned int)width - 1;
	h = (unsigned int)height - 1;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* firt array of pointer */
	ar2d = (int **) malloc(w * sizeof(int *));

	/* array of array */
	for (i = 0; i < height; i++)
	{
		ar2d[i] = (int *) malloc(h * sizeof(int));
	}
	if (ar2d == NULL)
	{
		return (NULL);
	}
	return (ar2d);
	free (ar2d);
}
