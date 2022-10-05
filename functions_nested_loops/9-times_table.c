 #include "main.h"

/**
 * times_table- function print the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b, r;

	a = 0;
	b = 0;

	while (a <= 9)
	{
		while (b <= 9)
		{
			r = a * b;
			if (b <= 9)
			{
				if (r >= 10)
				{
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
					if (b < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(r + '0');
					if (b < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				b++;
			}
		}
		b = 0;
		_putchar('\n');
		a++;
	}
}
