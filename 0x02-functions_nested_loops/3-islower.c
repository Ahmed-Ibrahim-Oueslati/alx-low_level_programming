#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _islower - Entry point of the program.
 *
 * Description: checks if a character c is lowercase or not
 * Return: 1 (success).
* @c: c is the char to check (parameter)
 */
int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
return (0);
}
