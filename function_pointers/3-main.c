#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main- execute function corresponding to operator on a and b
 * @argc :count argument
 * @argv: array of argument
 * Return: result
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	else
	{
		result = (get_op_func(operator))(num1, num2);
		printf("%d\n", result);
	}
	return (0);
}
