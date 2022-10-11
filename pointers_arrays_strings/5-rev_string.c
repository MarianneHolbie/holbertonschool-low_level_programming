#include "main.h"

/**
 * rev_string- function to reverse a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i, j;
	char value;

	/* len = _strlen(s) */
	while (*(s + len) != '\0')
		len++;

	j = len - 1;

	for (i = 0; i < (len / 2); i++)
	{
		value = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = value;
		j--;
	}
}
