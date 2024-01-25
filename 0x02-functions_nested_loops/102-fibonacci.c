#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int y;
long int u = 1;
long int p = 2;
long int k;
printf("%ld, ", u);
printf("%ld, ", p);
for (y = 1 ; y < 49 ; y++)
{
k = p + u;
if ( y != 48)
{
printf("%ld, ", k);
}
else 
{
printf("%ld", k);
}
u = p;
p = k;
}
printf("\n");
return (0);
}
