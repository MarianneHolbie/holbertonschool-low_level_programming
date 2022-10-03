#include <stdio.h>
/**
 * main- Entry point
 * description: print all single digit numbers of base 10
 * return: 0
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

	return (0);
}
