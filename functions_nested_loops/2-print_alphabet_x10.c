#include "main.h"

/**
 * print_alphabet_x10- entry point
 * description: print 10 times the alphabet in lowercase
 * Return: 0
 */

/* function 10x alphabet */
void print_alphabet_x10(void)
{
	int i;

/* loop 10 fois */
	for (i = 0; i < 10; i++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
