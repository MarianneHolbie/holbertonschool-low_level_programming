#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked- function that allocates memory using malloc
 * @b: unsigned int
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	/* pointer which is return */
	void *p;

	/* allocates memory for b */
	p = malloc(b);

	/* malloc fails */
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}

