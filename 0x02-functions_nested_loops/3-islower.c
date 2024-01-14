#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _islower - Entry point of the program.
 *
 * Description: checks if a character is lowercase or not 
 *
 * Return: Always 0 (success).
 */
int _islower(int c)
{
int c ;
if (c > 96 && c < 123)
{
return (1);
}
else
return (0);
}
