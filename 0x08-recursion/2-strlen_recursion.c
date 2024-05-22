#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion- Entry point of the program.
 *
 * Description:  returns the length of a string
 *@s: string 
 * Return: Always 0 (success).
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
