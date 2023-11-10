#include "function_pointers.h"

/**
 * print_name - calls a function and prints a name
 * Return: void
 * @name: name to print
 * @f: pointer to callback function that will print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
