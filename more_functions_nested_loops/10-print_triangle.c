#include "main.h"

/**
 * print_triangle- print a triangle
 * @size: size of the triangle
 * Return: triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int line, spc, htag, i, j;

		for (line = 1; line <= size; line++)
		{
			spc = size - line;
			htag = line;

			for (i = 1; i <= spc; i++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= htag; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}


