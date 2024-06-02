#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Description: Allocates memory and exits with status 98 if allocation fails.
 *
 * Return: Returns a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
