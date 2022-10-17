#include "main.h"

/**
 * _pow_recursion- return the value of x raised to the power of y
 * @x: number
 * @y: power
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	/* error case */
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		/* particular case if power = 0 or x = 1, x power y is 1 */
		if (y == 0 || x == 1)
		{
			return (1);
		}
		else
		{
			/* other case : x^y = x * x^(y-1) */
			return (x * _pow_recursion(x, y - 1));
		}
	}
}
