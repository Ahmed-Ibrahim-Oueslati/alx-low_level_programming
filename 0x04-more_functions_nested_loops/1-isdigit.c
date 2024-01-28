#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry point of the program.
 *
 * Description: checks if the int is a digit
 *
 * Return: 1 if c is a digit
 * @c: parameter to check
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
