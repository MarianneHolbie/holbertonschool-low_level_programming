#include "main.h"

/**
 * puts2- prints every other character of a string
 * @str: string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int len = 0, i, j, n;

	while (*(str + len) != '\0')
		len++;

	j = len - 1;

	for (i = 0; i <= j; i++)
	{
		n = *(str + i);
		_putchar(n);
		i = i + 1;
	}
	_putchar('\n');
}
