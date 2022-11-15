#include "main.h"

/**
 * binary_to_uint- convert binary to uint
 * @b: pointer to binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, puiss_two;
	int i;

	sum = 0; /* to sum all puissance of 2 */
	i = 0; /* count */
	puiss_two = 1; /* 2^0 = 1 */

	/* count number of 0 and 1 in string b */
	while (b[i] != '\0')
	{
		i++;
	}

	i--;
	/* reverse loop : each number * by puissance of 2 corresponding */
	while (i >= 0)
	{
		if (b[i] == '1')
			sum = sum + puiss_two;
		puiss_two = puiss_two * 2; /* up puissance of 2 */
		i--;
	}

	return (sum);
}
