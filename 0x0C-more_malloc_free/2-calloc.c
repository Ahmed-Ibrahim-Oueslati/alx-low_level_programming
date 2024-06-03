#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* _calloc - Allocates memory for an array and initializes it to zero.
* @nmemb: Number of elements.
* @size: Size of each element.
*
* Return: Pointer to the allocated memory, or NULL if allocation fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
{
	return ((NULL));
}
/* Allocate memory for the array */
p = malloc(nmemb * size);
if (p == NULL)
{
	return ((NULL));
}
/* Initialize allocated memory to zero */
for (i = 0; i < nmemb * size; i++)
{
	p[i] = 0;
}
return ((p));
}
