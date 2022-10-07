#include "main.h"

/**
 * print_diagonal- function to print diagonal line on the terminal
 * @n: number of times the character \
 * Return: diagonal of n \ character
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		/* spc : number of ' ' */
		int spc = 0;

		while (spc != n)
		{
			for (i = 0; i < spc; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			spc++;
		}
	}
	else
		_putchar('\n');
}
