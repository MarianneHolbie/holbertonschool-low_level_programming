#include "main.h"

/**
 * _strcmp- function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if egal string, negatif number if s2>s1; positif if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
