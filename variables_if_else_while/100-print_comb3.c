#include <stdio.h>
/**
 * main- Entry point
 * Description: print all combinaison of 2 number
 * Return: 0
 */
int main(void)
{
	int n_one = 0;
	int n_two = 1;

	for (n_one = 0; n_one <= 8; n_one++)
	{
		for (; n_two <= 9; n_two++)
		{
			if (n_two > n_one)
			{
				if (n_two == 9 && n_one == 8)
				{
					printf("%d%d\n", n_one, n_two);
				}
				else
					printf("%d%d, ", n_one, n_two);
			}
		}
		n_two = 1;
	}
	return (0);
}

