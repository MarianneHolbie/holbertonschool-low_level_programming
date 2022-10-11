#include "main.h"

/**
 * _puts- prints a string follow by a new line to stdout
 * @str:
 *
 * Return: 0
 */

void _puts(char *str)
{
	/* number of letter; letter caractere in the case n° number */
	int number = 0;
	char letter;
	/* as long as is not 0, print letter and we go to the next caracter */
	while (*(str + number) != '\0')
	{
		letter = *(str + number);
		_putchar(letter);
		number++;
	}
	_putchar('\n');
}
