#include "main.h"
#include <stdio.h>

/**
 * *_strcpy- copies the string pointed to by src to pointed to by dest
 * @dest: buffer pointer
 * @src: strinf pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;
	char car;

	while (*(src + len) != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		car = *(src + i);
		*(dest + i) = car;
	}
	return (dest);
}


