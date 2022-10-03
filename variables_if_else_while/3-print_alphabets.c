#include <stdio.h>
/**
 * main- Entry point
 * Description : print alphabet lower and uppercase
 * Return: 0
*/
int main(void)
{
	char letter;
	/* loop to print alphabet lowercase */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
			putchar(letter);
	}
	/* loop to print alphabet uppercase */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
