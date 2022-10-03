#include <stdio.h>
/**
 * main- Entry point
 * Description: print all the numbers of base 16
 * Return: 0
 */
int main(void)
{
	int base16;

	/*loop to print 10 first numbers to base16 */
	base16 = 48;
	while (base16 <= 57)
	{
		putchar(base16);
		base16++;
	}

	/*loop to print 11-15 numbers to base16 */
	base16 = 97;
	while (base16 <= 102)
	{
		putchar(base16);
		base16++;
	}

	putchar('\n');
	return (0);
}
