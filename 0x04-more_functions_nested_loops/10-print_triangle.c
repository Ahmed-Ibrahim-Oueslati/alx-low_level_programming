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
if (size > 0)
{
for (b = 0; b < size; b++)
{
for (p = 0; p < size; p++)
{
_putchar('#');
}
_putchar(10);
}
}
else
{
_putchar(10);
}
}
