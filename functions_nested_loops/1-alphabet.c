#include "main.h"

/**
 * print_alphabet- entry point
 * Description: print alphabet lowercase with print_alphabet function
 * Return: 0
 */

void print_alphabet(void)
{	
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
