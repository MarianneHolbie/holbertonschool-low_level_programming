#include <stdio.h>
/**
 * main- Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, combinaison;

	combinaison = '0';

	/* loop to print all possible combinations */
	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			putchar(combinaison);
			putchar(',');
			putchar(' ');
			combinaison++;
		}
		else
			putchar(combinaison);
	}

		putchar('\n');
		return (0);
}
