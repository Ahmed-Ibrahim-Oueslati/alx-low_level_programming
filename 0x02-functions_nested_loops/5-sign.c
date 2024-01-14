#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_sign - Entry point of the program.
 *
 * Description: prints the sign of a number.
 *Returns 1 and prints + if n is greater than zero
 *Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 * 
 */
int print_sign(int n)
{
if (n > 0)
{
return(1);
putchar('+');
}
else if (n ==0)
{
return(0);
putchar('0');
}
else
{
return (-1);
putchar('-');
putchar('1');
}
}
