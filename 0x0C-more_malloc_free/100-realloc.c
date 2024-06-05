#include <stdlib.h>
#include <stdio.h>
/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: A pointer to the memory previously allocated
* @old_size: The size, in bytes, of the allocated space for ptr
* @new_size: The new size, in bytes, of the new memory block
* Return: A pointer to the newly allocated memory block, or NULL on failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
unsigned int i;
/* If the new size is the same as the old size, return the original pointer */
if (new_size == old_size)
{
	return ((ptr));
}
/* If the pointer is NULL, allocate new memory */
if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
{
	return ((NULL));
}
return ((p));
}
if (new_size == 0)
{
free(ptr);
return ((NULL));
}
/* Allocate new memory */
p = malloc(new_size);
if (p == NULL)
{
	return ((NULL));
}
/* Copy the data from the old memory block to the new memory block */
for (i = 0; i < old_size && i < new_size; i++)
{
	((char *)p)[i] = ((char *)ptr)[i];
}
/* Free the old memory block */
free(ptr);
return ((p));
}
