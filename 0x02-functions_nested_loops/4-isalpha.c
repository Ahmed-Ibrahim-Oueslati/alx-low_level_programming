#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Entry point of the program.
 *
 * Description: checks if an int  c is an alphabetic character
 * Return: 1 (success).
* @c: c is the int  to check (parameter)
 */
int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
return (1);
}
else
return (0);
}
