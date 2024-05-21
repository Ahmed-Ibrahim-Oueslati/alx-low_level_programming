#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* print_all_letters_starting_from - Entry point of the program.
* Description:Prints all letters starting from a given position in a string.
* @s: The string to print from.
*/
void print_all_letters_starting_from(char *s)
{

if (*s == '\0')
{
return;
}
_putchar(*s);
print_all_letters_starting_from(s + 1);
}

/**
* _puts_recursion - Prints a string, followed by a new line.
* @s: The string to print.
*/
void _puts_recursion(char *s)
{
print_all_letters_starting_from(s);
_putchar('\n');
}


