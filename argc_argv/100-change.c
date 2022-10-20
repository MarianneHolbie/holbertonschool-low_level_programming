#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- prints the minimum number of coins to make change
 * @argc: argument cont
 * @argv: array of arguments
 *
 * Return: error if more one argument, and 1, 0 if negatif
 */

int main(int argc, char *argv[])
{
	int amount, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);

		while (amount >= 25)
		{
			amount = amount - 25;
			cents++;
		}
		while (amount >= 10)
		{
			amount = amount - 10;
			cents++;
		}
		while (amount >= 5)
		{
			amount = amount - 5;
			cents++;
		}
		while (amount >= 2)
		{
			amount = amount - 2;
			cents++;
		}
		while (amount >= 1)
		{
			amount = amount - 1;
			cents++;
		}
		printf("%d\n", cents);
	}
	return (0);
}
