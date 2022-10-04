#include "main.h"

/**
 * print_last_digit- function that print last digit of a number
 * @n: integer to extract the last digit
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	/* u valeur of last digit */
	int u;

	/* % possible only with positiv number */
	if (n > 0)
	{
		u = n % 10;
		_putchar(u + '0');
	}
	else
	{
		n = -n;
		u = n % 10;
		_putchar(u + '0');
	}
	return (0);
}

