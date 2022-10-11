#include "main.h"

/**
 * print_rev- print a string in reverse
 * @s: pointer value to the string
 *
 * Return: 0
 */

void print_rev(char *s)
{
	/* number of letter; letter caractere in the case n° number */
	int number = 0;
	int len = 0;
	char letter;

	/* length of chain of string */
	while (*(s + len) != '\0')
		len++;

	/* loop to print string in reverse */
	for (number = (len - 1); number >= 0; number--)
	{
		letter = *(s + number);
		_putchar(letter);
	}
	_putchar('\n');
}
