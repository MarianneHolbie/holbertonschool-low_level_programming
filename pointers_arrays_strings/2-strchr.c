#include "main.h"

/**
 * *_strchr- function that locates a character in a string
 * @s: pointer to the string
 * @c: character to localize
 *
 * Return: c if exist, Null if doesn't
 */

char *_strchr(char *s, char c)
{
	int i;

	/* read the string */
	for (i = 0; (*(s + i)) != '\0'; i++)
	{
		/* if the char in s[i] is c, return the end of the string */
		if (*(s + i) == c)
		return (s + i);
	}

	if (*(s + 1) == '\0')
		return (s + 1);

	return ('\0');
}


