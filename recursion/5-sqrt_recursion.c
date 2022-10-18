#include "main.h"

/**
 * _sqrt_recursion- function that evaluate the natural square root of a number
 * @n: number
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 1)
			return (1);
	}

	return (_framing(root, n));
}

/**
 * _framing- function to evaluate square roo of n
 * @n: integer
 * @root: integer
 *
 * Return: root or -1
 */

int _framing(int root, int n)
{
	/* test if root * root = n, root is the natural square root */
	if ((root * root) == n)
	{
		return (root);
	}
	else
	{
		/* test only number < n/2 square root always minus thant half number */
		if (root == n / 2)
		{
			return (-1);
		}
	}
	/* up root by 1 with recursive to test other root number */
	return (_framing(root + 1, n));
}
