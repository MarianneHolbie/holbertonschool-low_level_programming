#include <stdio.h>
/**
 * main- Entry point
 * Description: print alphabet in lowercase
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
	putchar(' ');
	return (0);
}
