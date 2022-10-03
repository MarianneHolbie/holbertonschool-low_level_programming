#include <stdio.h>
/**
 * main- Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int combinaison;

	combinaison = 48;

	/* loop to print all possible combinations ascii single number */
	for (combinaison = 48; combinaison <= 57; combinaison++)
	{
		putchar(combinaison);
		if (combinaison != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

		putchar('\n');
		return (0);
}
