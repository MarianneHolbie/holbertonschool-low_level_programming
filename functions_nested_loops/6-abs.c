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
		return(n);
	}
	else
		{
			n = -n;
			return(n);
		}
		return (0);
}
