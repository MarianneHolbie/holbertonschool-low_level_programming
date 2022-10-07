#include "main.h"

/**
 * print_square- function to print a square
 * @size: size of square
 * Return: square
 */

void print_square(int size)
{
	if (size > 0)
	{
		int line, htag;

		line = 0;
		htag = 0;

		for (line = 0; line < size; line++)
		{
			for (htag = 0; htag < size; htag++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
