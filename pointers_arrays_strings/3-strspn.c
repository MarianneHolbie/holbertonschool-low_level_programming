#include "main.h"

/**
 * _strspn- gets the length of a prefix substring in a segment
 * @s : segment initial
 * @accept: bytes accepted
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int length = 0;

	/* loop to screen all charactere of initial segment */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		found = 0;

		/* compare element of initial segment with each element of accept */
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/* Condition : if it's egal length implemntation */
			if (*(s + i) == *(accept + j))
			{
				length = length + 1;
				found = 1;
			}
		}

		if (found == 0)
			return (length);
	}
	return (0);
}
