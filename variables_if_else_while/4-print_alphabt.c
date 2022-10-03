#include <stdio.h>
/**
 * main- Entry point
 * Description: print alphabet lowercase except q and e
 * Return: 0
*/
int main(void)
{
	char letter;
	/* loop to print alphabet lowercase sauf q and e */
	letter = 'a';
	while (letter <= 'z' && letter != 'q' && letter != 'e')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
