#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the combination of 2 digits .
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int n = 48;
int j = 48;
while (n < 57)
{
while (j < 58)
{
if (j > n && j != n)
{
putchar(n);
putchar(j);
if (n < 56)
{
putchar(44);
putchar(32);
}
}
j++;
}
j = j - 9;
n = n + 1;
}
putchar('\n');
return (0);   
}
