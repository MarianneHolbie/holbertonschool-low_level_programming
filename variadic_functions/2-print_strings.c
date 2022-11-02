#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings- function that prints strings
 * @separator: separator of string
 * @n: count of arg
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *txt;
	va_list strings;

	/* if no strings */
	if (n == 0)
	{
		printf("\n");
		exit(0);
	}

	/* initialize */
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		/* replace txt if string is null */
		txt = va_arg(strings, const char*);
		if (txt == NULL)
			txt = "(nil)";

		/* if separator is NULL print without spacer */
		if (separator == NULL && i != (n - 1))
		{
			printf("%s", txt);
		}
		else
			if (i != (n - 1))
			{
				printf("%s%s", txt, separator);
			}
	}
	printf("%s", txt);
	va_end(strings);
	printf("\n");
}
