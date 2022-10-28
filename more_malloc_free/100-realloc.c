#include "main.h"
#include <stdlib.h>

/**
 * _realloc- function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of space for ptr
 * @new_size: size of new memory block
 *
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size * sizeof(char));
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = ((char *)ptr)[i];
		}
	}
	free(ptr);
	return (new_ptr);
	free(new_ptr);
}
