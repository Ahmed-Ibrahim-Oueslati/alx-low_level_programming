#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * int _abs - prints the absolute value of an integer 
 * Return: a positve int 
 * @n: n is the number to check (parameter)
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
n = n * -1 ;
return (n);
}
else
{
return (0);
}
}
