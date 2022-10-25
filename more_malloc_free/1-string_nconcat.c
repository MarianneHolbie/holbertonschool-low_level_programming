#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat- concatenate one string and n byte of the other
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *p;

	if (s1 == 0)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == 0)
		len2 = 0;
	else
		len2 = strlen(s2);

	p = malloc((len1 + n + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	if (n >= len2)
	{
		for (i = 0; i < len2; i++)
		{
			p[i] = s2[i];
			len1++;
		}
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			p[len1] = s2[i];
			len1++;
		}
	}
	p[len1] = '\0';
	return (p);
}
