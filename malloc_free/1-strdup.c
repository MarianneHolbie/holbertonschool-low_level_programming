#include "main.h"
#include <stdlib.h>

/**
 * _strdup- function return a pointer space memory contains copy of string
 * @str: string to copy
 *
 * Return: NULL if str=NULL or insufficient memory
 * or pointer to the duplicate string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j, len = 0;
	char *ar;

	if (str == NULL)
		return (NULL);

	for (j = 0; *(str + j) != '\0'; j++)
	{
		len++;
	}

	ar = malloc((len + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (i < len + 1)
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
	free(ar);
}
