#include "main.h"

/**
 * *_memcpy- copies n byte from memory area to an other memory area
 * @dest: pointer to the memory destination
 * @src: memory where the n byte copies
 * @n: number of byte copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
