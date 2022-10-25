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
	char *pAr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pAr = malloc(nmemb * size);
	if (pAr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		pAr[i] = 0;
	}
	return (pAr);

}
