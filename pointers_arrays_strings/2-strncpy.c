#include "main.h"

/**
 * *_strncpy- copy a string
 * @dest: pointer to string destination
 * @src: pointer to string copy
 * @n: number of byte to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
