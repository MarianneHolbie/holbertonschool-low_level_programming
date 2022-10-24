#include "main.h"
#include <stdlib.h>

/**
 * create_array- function to create an array
 * @size: size of the array
 * @c: character put on the array
 *
 * Return: Null if size=0 or array Null, array if it is ok
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	ar = malloc(size * sizeof(char));
	ar[0] = c;

	if (size == 0 || ar == NULL)
		return (NULL);
	else
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
	return (ar);
}
