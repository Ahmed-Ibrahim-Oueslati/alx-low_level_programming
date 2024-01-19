#include <stdlib.h>
#include "main.h"
#include <stdio.h>
 /**
  * print_sign - prints sign of number
  * Return : 1  if n is greater than zero
  * @n: n is the number to check (parameter)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar ('0');
return (0);
}
}
