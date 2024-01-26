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
long long int u = 1;
long long int p = 2;
long long int k;
printf("%lld, ", u);
printf("%lld, ", p);
for (y = 1 ; y < 97 ; y++)
{
k = p + u;
if (y != 96)
{
printf("%lld, ", k);
}
else
{
printf("%lld", k);
}
u = p;
p = k;
}
printf("\n");
return (0);
}
