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
int u = 1;
int p = 2;
int k;
printf("%d, ", u);
printf("%d, ", p);
for (y = 1 ; y < 50 ; y++)
{
k = p + u;
printf("%d, ", k);

u = p;
p = k;
}
printf("\n");
return (0);
}
