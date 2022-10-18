#include "main.h"
#include <stdio.h>

/**
 * _main- function that prints the nomber of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * return: 0
 */

int main(int argc, char *argv[]__attribute__ ((unused)))
{
	/* argc - 1 number of argument because 1st is name */
	printf("%d\n", (argc - 1));
	return (0);
}
