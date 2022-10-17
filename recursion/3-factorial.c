#include "main.h"

/**
 * factorial- function that return the factorial of a given number
 * @n: number to factorise
 *
 * Return: result of factorisation
 */

int factorial(int n)
{
	/* error indicator */
	if (n < 0)
	{
		return (-1);
	}
	/* special case */
	else
	{
		if (n == 0)
		{
			return (1);
		}
		/* other case : recursion of factorial */
		else
		{
			return (n * factorial(n - 1));
		}
	}
}
