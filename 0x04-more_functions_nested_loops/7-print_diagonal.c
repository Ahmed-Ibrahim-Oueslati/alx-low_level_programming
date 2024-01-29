#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Entry point of the program.
 *
 * Description: Prints a digonal line in the terminal
 *@n: parameter to print
 * Return: void.
 */
void print_diagonal(int n)
{
int p;
int b;
if (n > 0)
{
for (b = 0; b < n; b++)
{
for (p = 0; p < b; p++)
{
_putchar(' ');
}
_putchar('\\');
_putchar(10);
}
}
else 
{
_putchar(10);
}
}
