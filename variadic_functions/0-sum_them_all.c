#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- function that sum of all its parameters
 * @n: number of parameters to sum
 *
 * Return: 0 if n == 0, sum if not
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	/* variable de traitement */
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n); /* initialisation list avec nom dernier paramètre fixe */

	/* recupération et traitement des paramètres */
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	/* fin de l'analyse */
	va_end(args);

	return (sum);
}

