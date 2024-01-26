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
unsigned int u = 1;
unsigned int p = 2;
unsigned int k;
printf("%u, ", u);
printf("%u, ", p);
for (y = 1 ; y < 97 ; y++)
{
k = p + u;
if (y != 96)
{
printf("%u, ", k);
}
else
{
printf("%u", k);
}
u = p;
p = k;
}
printf("\n");
return (0);
}
