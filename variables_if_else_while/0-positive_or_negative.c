#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main- Entry point
 * description : the number stored in the variable is positive or negative
 * Return: 0
*/
int main(void)
{
		int n;
/* assign a random number to the variable */
			srand(time(0));
				n = rand() - RAND_MAX / 2;
/* print sign of the random number */
				if (n > 0)
					printf("%d is positive\n", n);
				if (n == 0)
					printf("%d is zero\n", n);
				if (n < 0)
					printf("%d is negative\n", n);
				return (0);
}
