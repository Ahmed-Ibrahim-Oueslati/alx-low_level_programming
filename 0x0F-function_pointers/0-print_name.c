#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry point of the program.
 *
 * Description: prints a name.
 *@f: pointer to a function that will print the name
 *@name: the name to print
 * Return: Always 0 (success).
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
{
f(name);
}
}
