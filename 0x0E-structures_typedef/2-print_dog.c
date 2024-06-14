#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: Prints the details of a struct dog, including
 * its name, age, and owner. If an element is NULL, it prints (nil)
 * instead.
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name != NULL)
{
printf("Name : %s\n", d->name);
}
else
printf("Name : (nil)\n");

if (d->age != 0)
printf("Age : %f\n", d->age);

else
printf("Age: (nil)\n");

if (d->owner != NULL)
{
printf("Owner : %s\n", d->owner);
}
else
printf("Owner: (nil)\n");

}

}
