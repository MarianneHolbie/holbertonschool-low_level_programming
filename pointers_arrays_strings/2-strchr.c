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

	for (i = 0; (*(s + i)) != '\0'; i++)
	{
		if (*(s + i) == c)
		return (s + i);
	}
	return ('\0');
}


