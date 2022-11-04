#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * pr_c- function that print char
 * @tall: char to print
 */

void pr_c(va_list tall)
{
	printf("%c", va_arg(tall, int));
}

/**
 * pr_i- function that print an integer
 * @tall: int to print
 */

void pr_i(va_list tall)
{
	printf("%d", va_arg(tall, int));
}

/**
 * pr_f- function that print float
 * @tall: float to print
 */

void pr_f(va_list tall)
{
	printf("%f", va_arg(tall, double));
}

/**
 * pr_s- function to print string
 * @tall: string
 */

void pr_s(va_list tall)
{
	char *txt;

	txt = va_arg(tall, char *);

	printf("%s", txt);
}

/**
 * print_all- function that printf good type of arg
 * @format: type of arg to print
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;

	/* new entry of struct pr */
	pr_arg tall[] = {
		{"c", pr_c},
		{"i", pr_i},
		{"f", pr_f},
		{"s", pr_s},
		{NULL, NULL},
	};

	/* pointer to the argument list */
	va_list to_pr;

	va_start(to_pr, format);

	while (format[j] != 0)
	{
		while (i < 4)
		{
			if (format[j] == *tall[i].t_arg)
			{
				tall[i].f(to_pr);
				if (format[j + 1] != '\0')
					printf(", ");
			}
			i++;
		}
		i = 0;
		j++;
	}

	va_end(to_pr);
	printf("\n");
}
