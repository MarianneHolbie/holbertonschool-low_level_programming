#include "main.h"

/**
 * print_line- function to print straight line
 * @n: length of the line
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; ++i)
			_putchar('_');
	}
	_putchar('\n');
}
