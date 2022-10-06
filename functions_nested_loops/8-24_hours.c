#include "main.h"

/**
 * jack_bauer- print every minute of a day
 * Description: every minute starting from 00:00 to 23:59
 * Return: 0
 */

void jack_bauer(void)
{
	int h, m;

	h = 0;
	m = 0;

	/* incrementation des heures */
	while (h <= 24)
	{
		/* impression du chiffre des dizaines */
		_putchar(h / 10 + '0');
		/* impresson du chiffre des unités */
		_putchar(h % 10 + '0');
		_putchar(':');
		
		while (m <= 59)
		{
			/* impression chiffre des dizaines */
			_putchar(m / 10 + '0');
			/* impression chiffre des unités */
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
	h++;
	}
}
