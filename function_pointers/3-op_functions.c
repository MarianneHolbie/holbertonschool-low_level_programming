#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add- function that add two int
 * @a: int 1
 * @b: int 2
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- function that substract two int
 * @a: first int
 * @b: int to substract
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- function that multiplicate two int
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- function that return result of division a by b
 * @a: number to divise
 * @b: divisor
 *
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- return the remainder of the division of a by b
 * @a: number to divise
 * @b: divisor
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}

