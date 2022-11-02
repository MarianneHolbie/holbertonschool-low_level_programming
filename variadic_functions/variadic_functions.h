#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* function that returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);
/* function that prints numbers */
void print_numbers(const char *separator, const unsigned int n, ...);
/* function that prints strings */
void print_strings(const char *separator, const unsigned int n, ...);


#endif
