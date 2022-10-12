#include "main.h"

/**
 * *leet- function that encode a string into 1337
 * @s: the string
 *
 * Return: s
 */

char *leet(char *s)
{
	int i, j;
	/* array of resp. lower, upercase and replace into 1337 */
	char alpha[] = {'a', 'e', 'o', 't', 'l'};
	char ALPHA[] = {'A', 'E', 'O', 'T', 'L'};
	char leet[] = {'4', '3', '0', '7', '1'};

	/* loop for all character of string */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* loop to compare each character of array alpha & ALPHA */
		for (j = 0; j < 5; j++)
		{
			/* condition : if s[i] == alpha[i] or ALPHA[i] replace by leet[i] */
			if ((*(s + i) == alpha[j]) || (*(s + i) == ALPHA[j]))
				*(s + i) = leet[j];
		}
	}
	return (s);
}
