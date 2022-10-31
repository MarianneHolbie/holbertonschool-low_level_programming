#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- function that initialize a varaible of type struct dog
 * @d: pointer of struct
 * @name: pointer of name
 * @age: age
 * @owner: pointer of owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
