#include "main.h"

/**
 * _strlen- return the length of a string
 * @s : pointer to put the value of the string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	/* number : number of the caractere in the string */
	int number = 0;

	/* as long as the value 0 is not found, go to the next character */
	while (*(s + number) != '\0')
		number++;

	return (number);
}
