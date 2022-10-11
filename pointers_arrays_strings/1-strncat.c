#include "main.h"

/**
 * *_strncat- function to add n byte of a string to another
 * @dest: resulting string
 * @src: string to add n byte
 * @n: number of byte
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_d = 0, i, j;

	while (*(dest + len_d) != '\0')
		len_d++;

	j = len_d;

	for (i = 0; i < n ; i++)
	{
		*(dest + j) = *(src + i);
		j++;
	}
	return (dest);
}
