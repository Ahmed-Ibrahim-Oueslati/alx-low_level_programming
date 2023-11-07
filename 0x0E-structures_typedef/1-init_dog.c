#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable of type struct dog to initialize
 * @name: the name of the dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
