#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* _realloc - Entry point of the program.
*
* Description: reallocates a memory block using malloc and free
*@ptr:a pointer to the memory previously allocated
*@old_size:  the size, in bytes, of the allocated space for ptr
*@new_size: the new size, in bytes of the new memory block
* Return: Always 0 (success).
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
{
	return ((ptr));
}
if (ptr == NULL)
{
	ptr = malloc(new_size);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return ((NULL));
}
ptr = malloc(new_size);
if (ptr == NULL)
{
	return ((NULL));
}
return ((ptr));
}
