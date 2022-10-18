#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Error if no number, neither result
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
		printf("Error\n");

	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}

	return (0);
}
