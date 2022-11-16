#include "main.h"

/**
 * clear_bit- sets value of a bit to 0 at given index
 * @n: pointer to number
 * @index: place of bit to change
 *
 * Return: 1 if worked, -1 if it failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, num;

	/* stock value of n */
	num = *n;

	/* test if index > n in binary */
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	/* create mask with 1 at right place, take the oposite */
	mask = ~(1 << index);

	/* aplli mask to num */
	num = num & mask;

	/* change value of n */
	*n = num;

	return (1);
}
