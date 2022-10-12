#include "main.h"

/**
 * *cap_string- capitalizes all word af a string with different separators
 * @s: string
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i, j, k;
	/* table of separator */
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	/* loop to pass all character in array s */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* loop to pass all character separator of sep */
		for (j = 0; sep[j] != '\0'; j++)
		{
			/* condition : compare s[i] to sep[j], if == go to the next character */
			if (*(s + i) == sep[j])
			{
				k = i + 1;
				/* condition : if the next character is alpha lowercase and != '\0' */
				if ((*(s + k) >= 'a' ) && (*(s + k) <= 'z') && (*(s + k) != '\0'))
					*(s + k) = *(s + k) - 32;
			}
		}
	}
	return (s);
}
