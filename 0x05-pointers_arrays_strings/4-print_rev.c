#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_rev - Entry point of the program.
 *
 * Description: prints a string, in reverse, followed by a new line.
 *@s: string to print
 * Return: void.
 */
void print_rev(char *s)
{
int j = 0;
while (s[j] != '\0')
{
j++;
}
while (j > 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
