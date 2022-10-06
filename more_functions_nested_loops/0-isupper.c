#include "main.h"

/**
 * _isupper- function to check uppercase character
 * @c: character to test
 * Return: 1 if c is uppercase, else 0
*/

int _isupper(int c)
{
	/* if c uppercase */
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
