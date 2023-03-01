#include <stdio.h>
/**
 * main- Entry point
 * Description: print all combinaison of 3 number
 * Return: 0
 */
int main(void)
{
	int n_one = 0;
	int n_two = 1;
	int n_three = 2;

	for (n_one = 0; n_one <= 8; n_one++)
	{
		for (; n_two <= 9; n_two++)
		{
			for (; n_three <= 9; n_three++)
			{
				if (n_two > n_one && n_three > n_two)
				{
					if (n_three == 9 && n_two == 8 && n_one == 7)
					{
						printf("%d%d%d\n", n_one, n_two, n_three);
					}
					else
						printf("%d%d%d, ", n_one, n_two, n_three);
				}
			}
			n_three = 2;
		}
			n_two = 1;
	}
	return (0);
}
