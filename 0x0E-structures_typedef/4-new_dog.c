#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = strdup(name);
	if (name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = strdup(owner);
	if (owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
