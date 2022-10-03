#include <stdio.h>
/**
 * main- Entry point
 * Description: print all single digit numbers of base 10
 * Return: 0
*/
int main(void)
{
	int ascii;

	/* loop to print all single digit number of base 10 with ascii code*/
	ascii = 48;
	while (ascii <= 57)
	{	putchar(ascii);
		ascii++;
	}

	putchar('\n');
	return (0);
}
