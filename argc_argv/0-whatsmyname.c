#include "main.h"
#include <stdio.h>

/**
 * main- function that return program name
 * @argc: argument count
 * @argv: array, argument vector
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
