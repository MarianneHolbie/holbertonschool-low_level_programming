#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc- allocate memory for an array
 * @nmemb: number of elements
 * @size: size bytes each
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p_ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p_ar = malloc(nmemb * size);

	if (p_ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p_ar[i] = 0;
	}
	return (p_ar);

}
