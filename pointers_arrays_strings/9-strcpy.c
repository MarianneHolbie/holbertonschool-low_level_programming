#include "main.h"

/**
 * *_strcpy- function that copies the string pointed to by src to the buffer pointed to by dest
 * @dest: buffer pointer
 * @src: strinf pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
		len ++;



