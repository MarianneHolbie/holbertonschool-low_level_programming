#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- function that frees dofs of struct dog
 * @d: pointer
 * Return: 0
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
