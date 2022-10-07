 #include "main.h"

/**
 * times_table- function print the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b, r;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			r = a * b;
			if (r == 0)
			{
				_putchar(r + '0');
			}
			if ((r < 10) && (r != 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			if ((r >= 10) && (r != 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
		}
	_putchar('\n');
	}
}

