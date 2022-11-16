#include "main.h"

/**
 * set_bit- replace value of bit at given index by 1
 * @n: pointer to number
 * @index: place of bit to change
 *
 * Return: 1 if worked, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, num;

	/* sotck value of n */
	num = *n;

	/* test if index > n en binary */
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	/* create mask with only 1 at index position */
	mask = (1 << index);

	/* OR logical : if 1/2 is 1 -> 1 */
	num = num | mask;

	/* change value of n */
	*n = num;

	return (1);
}
