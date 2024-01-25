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
int a;
int y = 0;
for (a = 0; a < 1024; a++)
{
if ((a % 5 == 0) || (a % 3 == 0))
{
y = y + a;
}
}
printf("%d\n", y);
return (0);
}
