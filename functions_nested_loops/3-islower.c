#include "main.h"

/**
 * _islower- entry point
 * @c: user input
 * Description: checks lowercase character
 * Return: 0
 */

int _islower(int c)
{
	/* if c lowercase */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
