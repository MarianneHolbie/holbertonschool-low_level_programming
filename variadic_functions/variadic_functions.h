#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* function that returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);
/* function that prints numbers */
void print_numbers(const char *separator, const unsigned int n, ...);
/* function that prints strings */
void print_strings(const char *separator, const unsigned int n, ...);
/* function that prints anything */
void print_all(const char * const format, ...);

/* function that print different format */
void pr_c(va_list tall);
void pr_i(va_list tall);
void pr_f(va_list tall);
void pr_s(va_list tall);

/**
 * struct pr_arg- Struct pr_arg
 *
 * @targ: type of character
 * @f: function associated
 */

typedef struct pr
{
	char *t_arg;
	void (*f)(va_list);
} pr_arg;

#endif
