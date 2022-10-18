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
	int result = 0, i;

	/* sum if minimum two element */
	if (argc < 3)
		printf("0\n");

	/* loop to read argument without name function */
	for (i = 1; i <= argc - 1; i++)
	{
		/* test if character is not a digit */
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		/* sum each argument */
		else
		{
			result = result + atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
