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
	int ln_name, ln_owner;

	/* create ptr_dog of type dog_t struct */
	ptr_dog = malloc(sizeof(dog_t));

	/* test malloc fails */
	if (ptr_dog == NULL)
		return (NULL);

	/* if name or owner Null, return Null */
	if (name == NULL || owner == NULL)
		return (NULL);

	ln_name = strlen(name) + 1; /*lenght of name */
	ln_owner = strlen(owner) + 1; /* lenght of owner */

	ptr_dog->name = malloc(sizeof(char) * ln_name); /* create space cp name */
	ptr_dog->age = age;
	ptr_dog->owner = malloc(sizeof(char) * ln_owner); /* create space cp owner */

	if (ptr_dog->name == NULL || ptr_dog->owner == NULL)
	{
		free(ptr_dog->owner);
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}

	strcpy(ptr_dog->name, name); /* copy string name */
	strcpy(ptr_dog->owner, owner); /* copy string owner*/

	return (ptr_dog);
}
