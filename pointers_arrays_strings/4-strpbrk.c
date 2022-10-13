#include "main.h"

/**
 * _strpbrk- function that sarches a string for any of a set of bytes
 * @s: string where search
 * @accept: search string
 *
 * Return: pointer to the byte or Null if no found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/* loop to read the string */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* loop to compare each character to the search string */
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/* condition : if found => return the end of the string */
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}
