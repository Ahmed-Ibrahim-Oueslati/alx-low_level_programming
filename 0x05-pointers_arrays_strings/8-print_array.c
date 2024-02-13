#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point of the program.
 *
 * Description: prints n elements of an array
  of integers, followed by a new line.
 *@a: array
 *@n: nb of elements
 * Return: Always 0 (success).
 */
void print_array(int *a, int n)
{
int i;
n--;
for (i = 0 ; i <= n; i++)
{
if ( i != n)
{ 
printf("%d, ", a[i]);
}
else 
{
printf("%d", a[i]);
}
}
printf("\n");
}

