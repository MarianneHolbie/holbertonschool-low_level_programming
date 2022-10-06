#include "main.h"

/**
 * _isdigit- function to check digit
 * @c: digit to check
 * Return: if c is a digit 1 else 0
 */

int _isdigit(int c)
{
	if (c < 47 && c > 58)
	{
		return (1);
	}
	else
		return (0);
}
