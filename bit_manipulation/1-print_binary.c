#include "main.h"

/**
 * print_binary- print a number in binary
 * @n: unsigned long int to print
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /* >> 1 like /2 */

	if (n & 1)
		_putchar('1'); /* 1 si n impair */
	else
		_putchar('0'); /* 0 si n pair */

}
