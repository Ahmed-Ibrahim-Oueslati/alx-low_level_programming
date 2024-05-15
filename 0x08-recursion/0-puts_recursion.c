#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion- Entry point of the program.
 *
 * Description: prints a string, followed by a new line.
 *@s:string to print
 * Return: Always 0 (success).
 */
void _puts_recursion(char *s)
{
int j, i;
while (s[j] != '\0')
j++;

for (i = 0; i < j; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
