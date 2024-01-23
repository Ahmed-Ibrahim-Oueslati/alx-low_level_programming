#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 *  print_to_98 - Entry point of the program.
 *
 * Description: printing nbs from n to 98 
 *
 * Return: void 
 * @n parametre to configure 
 */
void print_to_98(int n)
{
if (n < 98)

{
while (n < 99)
{
printf("%d, ", n);
n++;
}

}


if (n > 98)

{
while (n > 97)
{
printf("%d, ", n);
n--;
}
}

}
