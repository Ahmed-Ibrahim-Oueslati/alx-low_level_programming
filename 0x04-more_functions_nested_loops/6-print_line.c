#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_line - Entry point of the program.
 *
 * Description: Prints a line in the terminal
 *@n: parameter to print
 * Return: void.
 */
void print_line(int n)
{
int p;
if (n > 0)
{
for (p = 0; p < n; p++)
{
_putchar('_');
}
}
_putchar(10);
}
