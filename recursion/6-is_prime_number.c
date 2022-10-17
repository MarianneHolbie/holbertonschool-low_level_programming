#include "main.h"

/**
 * is_prime_number- determine if input integer is a prime number
 * @n: integer to test
 *
 * Return: 1 if it's, 0 if not
 */

int is_prime_number(int n)
{
	/* condition if n <= 1 it is not prime number by definition */
	if (n < 0 || n == 1)
	{
		return (0);
	}
	else
	{
		/* use another function to test to divide n by number i */
		if (check(2, n) == 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * check- function who test to divide n by successif i
 * @i: divisor
 * @n: to test
 *
 * Return: int
 */
int check(int i, int n)
{
	if (n == i)
	{
		return (0);
	}
	else
	{
		/* if n modulo i egal 0, n is divible by i */
		if (n % i == 0)
		{
			return (1);
		}
		else
		{
			return (check(i + 1, n));
		}
	}
}
