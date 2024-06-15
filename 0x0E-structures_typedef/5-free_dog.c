#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog- Entry point of the program.
 *
 * Description: frees dogs(struct)
 *@d: struct to free
 * Return: Always 0 (success).
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
