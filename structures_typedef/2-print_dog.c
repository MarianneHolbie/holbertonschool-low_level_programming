#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * print_dog- print a struct dog
 * @d: name of the structure to print
 *
 * Return: nil if emtpy element, nothing if Null, or the structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);

	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
		printf("Name: (nil)\n");
	if (d->age != NAN)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
