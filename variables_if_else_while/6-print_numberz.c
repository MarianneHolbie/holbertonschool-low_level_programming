#include <stdio.h>
/**
 * main- Entry point
 * Description: print all single digit numbers of base 10
 * Return: 0
*/
int main(void)
{
	int digit;

	/* loop to print all single digit number of base 10 */
	digit = 0;
	while (digit < 10)
	{	printf("%d", digit);
		digit++;
	}

	putchar('\n');
	return (0);
}
