#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * Return: pointer to allocated memory
 * @b: size in bytes of memory to allocate
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
