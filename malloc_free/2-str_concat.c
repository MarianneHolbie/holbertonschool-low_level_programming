#include "main.h"
#include <stdlib.h>

/**
 * str_concat- function concatenates two string in new allocate with malloc
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure or new string
 */



char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *ar;

	/* if chain is NULL treat as an empty string */
	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	/* calculate length of 2 string : len1 and len2 */
	for (j = 0; *(s1 + j) != '\0'; j++)
	{
		len1++;
	}

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		len2++;
	}

	ar = malloc((len1 + len2 + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	/* input S1 in ar */
	for (i = 0; i < len1; i++)
	{
		ar[i] = s1[i];
	}

	/* input S2 en ar */
	for (i = 0; i < len2 + 1; i++)
	{
		ar[len1] = s2[i];
		len1++;

	}

	return (ar);
	free(ar);
}
