#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen- return the length of a string
 * @s: pointer to put the value of the string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int number = 0;

	while (*(s + number) != '\0')
	number++;

	return (number);
}

/**
 * str_concat- function concatenates two string in new allocate with malloc
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure or new string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *ar;

	if (s1 == 0)
		len1 = 0;
	else
		len1 = _strlen(s1);

	if (s2 == 0)
		len2 = 0;
	else
		len2 = _strlen(s2);

	ar = malloc((len1 + len2 + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	/* input S1 in ar */
	for (i = 0; i < len1; i++)
	{
		ar[i] = s1[i];
	}

	/* input S2 en ar */
	for (i = 0; i < len2 ; i++)
	{
		ar[len1] = s2[i];
		len1++;

	}

	return (ar);
	free(ar);
}
