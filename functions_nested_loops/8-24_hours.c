#include "main.h"

/**
 * jack_bauer- print every minute of a day
 * Description: every minute starting from 00:00 to 23:59
 * Return: 0
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			/* impression des heures */
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			/* impression chiffre des minutes */
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}

