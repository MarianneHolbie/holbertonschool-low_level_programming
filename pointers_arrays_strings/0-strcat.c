#include "main.h"

/**
 * *_strcat- function to concatenate 2 strings
 * @dest: string to add
 * @src: string to append
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len_d = 0, i, j = 0;

	while (*(dest + len_d) != '\0')
		len_d++;

	for (i = len_d; *(src + j) != '\0'; i++)
	{
		*(dest + i) = * (src + j);
		j++;
	}
	return (dest);
}
