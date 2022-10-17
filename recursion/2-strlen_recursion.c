#include "main.h"

/**
 * _strlen_recursion- function that returns the length of a string
 * @s: string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	/* stop recursion */
	if (*s == '\0')
	{
		return (0);
	}
	/* return 1 + other characters in the remaining portion of the string */
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
