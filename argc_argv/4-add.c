#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- function that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if no number, Error if no digit, result
 */

int main(int argc, char *argv[])
{
	int result = 0, x, y, i;

	/* loop to test if is number et not character */
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] <= 57 && argv[x][y] >= 48)
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	/* loop to read argument without name function */
	for (i = 1; i <= argc - 1; i++)
	{
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
