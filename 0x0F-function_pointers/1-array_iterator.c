#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * array_iterator - Entry point of the program.
 *
 * Description:executes a function given as
 * a parameter on each element of an array
 *@array:array of elements
 *@size: is the size of the array
 *@action: is a pointer to the function
 * Return: Always 0 (success).
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action != NULL && array != NULL)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
