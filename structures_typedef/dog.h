#ifndef DOG_H
#define DOG_H
/**
 * struct dog- ID dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of owner
 *
 * Description: name and age of dog + name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function that intialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
