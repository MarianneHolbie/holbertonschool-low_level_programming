#include "dog.h"
#include <stdlib.h>

/**
 * new_dog- function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: name of the owner of the new dog
 *
 * Return: struct dog / Null if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

	ptr_dog = malloc(sizeof(dog_t));

	if (ptr_dog == NULL)
		return (NULL);

	ptr_dog->name = name;
	ptr_dog->age = age;
	ptr_dog->owner = owner;
	return (ptr_dog);
	free(ptr_dog);
}


