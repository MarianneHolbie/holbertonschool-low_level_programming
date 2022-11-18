#include "main.h"

/**
 * flip_bits- count number of bits to flip
 * @n: number 1
 * @m: number 2
 *
 * Return: number to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int n_set, m_set;
	int to_flip = 0;

	while (n > 0 || m > 0)
	{
		n_set = (n & 1); /* value of bit in n */
		m_set = (m & 1); /* value of bit in m */

		if (n_set != m_set) /* if value bit is different */
			to_flip++; /* up count */

		n = n >> 1; /* right shift to compare next bit value */
		m = m >> 1; /* right shift to compare next bit value */
	}
	return (to_flip);
}

