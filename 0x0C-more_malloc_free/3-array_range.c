#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* array_range - Entry point of the program.
*
* Description: Prints a string to the console.
*@min: the smallest integer
*@max: the biggest integer
* Return: Always 0 (success).
*/
int *array_range(int min, int max)
{
int *p;
int arr_len, i, size;
if (min > max)
{
	return ((NULL));
}
arr_len = max - min;
arr_len++;
size = arr_len *sizeof(int);
p = malloc(size);
if (p == NULL)
{
	return (NULL);
}
for (i = 0; i < arr_len; i++)
{
p[i] = min;
min++;
}
return ((p));
}
