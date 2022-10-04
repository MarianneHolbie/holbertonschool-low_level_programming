#include "main.h"

/**
 * _abs- funtion absolute value
 * @n: integer
 * Description: programm that computes the absolute value of an integer
 * Return: 0
*/

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else
		{
			n = n * -1;
			_putchar(n);
		}
	return (0);
}
