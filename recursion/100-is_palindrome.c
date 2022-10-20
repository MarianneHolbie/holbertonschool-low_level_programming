#include "main.h"
#include <stdio.h>

/**
 * is_palindrome- test if a string is a palindrome or not
 * @s: character of the string
 *
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	int i, j, len = 0;
	char a, b;

	/* length of the string */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	/* exclud \0 */
	len = len - 1;

	/* compare caracters */
	for (j = 0; j < len; j++)
	{
		a = *(s + j);
		b = *(s + len);
		if (a == b)
		{
			len = len - 1;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
