#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Entry point of the program.
 *
 * Description: Prints a square in the terminal
 *@size: parameter to print
 * Return: void.
 */
void print_triangle(int size)
{
int p;
int b;
int k = size;
int u; 
int m = 1;
if (size > 0)
{
for (b = 0; b < size; b++)
{
k--;
for (p = 0; p < k; p++)
{
_putchar(' ');
}
for (u = 0; u < m; u++)
{
_putchar('#');
}
m++;
_putchar(10);
}
}
else 
{
_putchar(10);
}
}

