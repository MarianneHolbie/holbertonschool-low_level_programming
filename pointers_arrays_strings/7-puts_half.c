#include "main.h"

/**
 * puts_half- function that prints second half of the string
 * @str: string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int len = 0, n, i;
	char c;

	while (*(str + len) != '\0')
		len++;

	n = (len - 1) / 2;

	for (i = n + 1; i <= len; i++)
	{
		c = *(str + i);
		_putchar(c);
	}
	_putchar('\n');
}
