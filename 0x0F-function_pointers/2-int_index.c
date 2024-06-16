#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * int_index - Entry point of the program.
 *
 * Description: searches for an integer
 *@array: array of int
 *@size: size of the array
 *@cmp: pointer to a func
 *Return:int_index returns the index of the first element
 *for which the cmp function does not return 0
 *If no element matches, return -1
 *If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL)
{
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i] == 1))
{
return (i);
}
}
}
return (-1);
}
