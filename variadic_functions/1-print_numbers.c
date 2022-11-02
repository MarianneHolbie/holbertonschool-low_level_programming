#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers- function that prints number
 * @separator: string to be printed between numbers
 * @n: count of numbers
 *
 * Return: NULL or number separate by separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nb = 0;

	va_list pnb;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}

	va_start(pnb, n);

	for (i = 0; i < n; i++)
	{
		nb = va_arg(pnb, int);

		if (separator == NULL && i != (n - 1))
		{
			printf("%d", nb);
		}
		else
			if (i != (n - 1))
			{
				printf("%d%s", nb, separator);
			}
	}
	printf("%d", nb);

	va_end(pnb);
	printf("\n");
}
