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
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	/* loop to print alphabet uppercase */
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
