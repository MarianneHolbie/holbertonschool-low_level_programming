#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	/* create ptr_dog of type dog_t struct */
	ptr_dog = malloc(sizeof(dog_t));

	/* test malloc fails */
	if (ptr_dog == NULL)
		return (NULL);

	/* if name or owner Null, return Null */
	if (name == NULL || owner == NULL)
		return (NULL);

	if (ptr_dog)
	{
		strcpy(ptr_dog->name, name);
		ptr_dog->age = age;
		strcpy(ptr_dog->owner, owner);
	}

	/*ptr_dog->name = name; */
	/*ptr_dog->age = age;*/
	/*ptr_dog->owner = owner;*/
	return (ptr_dog);
}
