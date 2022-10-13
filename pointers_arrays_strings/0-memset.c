#include "main.h"

/**
 * *_memset- function that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of byte in the memory area pointed
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* loop to assign n fois the value of b in the memory pointed by s */
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
