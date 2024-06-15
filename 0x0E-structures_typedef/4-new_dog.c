#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;

    if (name == NULL || owner == NULL)
        return NULL;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return NULL;

    dog->name = malloc(strlen(name) + 1);
    if (dog->name == NULL)
    {
        free(dog);
        return NULL;
    }
    strcpy(dog->name, name);

    dog->age = age;

    dog->owner = malloc(strlen(owner) + 1);
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return NULL;
    }
    strcpy(dog->owner, owner);

    return dog;
}



