#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main- Entry point
 * description: print last digit of the number stored in the variable n
 * Return: 0
*/
int main(void)
{
		int n, digit;
/* description: assign a random number to the variable n */
			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* description: find the last digit of a number with %10 */
				digit = n % 10;
				if (digit > 5 && digit !=0)
					printf("Last digit of %d is %d and is greater than 5\n", n, digit);
				if (digit < 6 && digit !=0)
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
				if (digit == 0)
					printf("Last digit of %d is %d and is 0\n", n, digit);
				return (0);
}
