#include <stdio.h>
#include "main.h"

/**
 * main- print number 0 to 100
 * multiples of 3 replace by Fizz
 * multiples of 5 replace by Buzz
 * multiples of both 3 and 5 replace by FizzBuzz
 * Return: 0
 */

int main(void)
{
	int n;
	
	for (n = 1; n <= 100; n++)
	{
		int mod3, mod5;
		mod3 = n % 3;
		mod5 = n % 5;
		
		if ((mod3 == 0) && (mod5 != 0))
		{
			printf("Fizz ");
		}
		else
		{
			if ((mod3 != 0) && (mod5 == 0))
			{
				printf("Buzz ");
			}
			else
			{
				if ((mod3 == 0) && (mod5 == 0))
				{
					printf("FizzBuzz ");
				}
				else
					printf("%d ",n);
			}
		}
	}
	return (0);
}
