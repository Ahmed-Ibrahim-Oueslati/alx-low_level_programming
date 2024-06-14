#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Entry point of the program.
 * Description: initialize a variable of type struct dog
 * @d:the struct name
 * @name: the 1st element of d
 * @age: the 2nd element of d
 * @owner: 3rd 1st element of d
 * Return: Always 0 (success).
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
