#include "main.h"

/**
 * _print_rev_recursion- print string in reverse with recursion
 * @s: string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	/* condition of end */
	if (*s == '\0')
	{
		return;
	}
	/* if it is not the end of the string go next */
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

