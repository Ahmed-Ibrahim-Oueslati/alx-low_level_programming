#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* factorial - Entry point of the program.
*
* Description:returns the factorial of a given number.
*@n: integer
* Return: -1 (error)
*/
int factorial(int n)


{
if (n < 0)
return (-1);
if (n == 1 || n == 0)
return (1);
return (n * factorial(n - 1));
}
