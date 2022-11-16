#include "main.h"

/**
 * get_bit- return value of a bit at given index
 * @n: number
 * @index: place of bit to test
 *
 * Return: 1 if set, 0 if not, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_index;

	/* if index is out of number test */
	if (index > n)
		return (-1);

	/* right shift n, index times */
	bit_index = (n >> index);

	/* test bit_index : set or unset ? */
	if (bit_index & 1)
		return (1);
	else
		return (0);
}
