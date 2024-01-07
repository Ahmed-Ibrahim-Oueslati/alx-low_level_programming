#include <stdlib.h>
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
int n = 48;
while (n < 58)
{
putchar(n);
n = n + 1;
}
int j = 97;
while (j < 103)
{
putchar(j);
j = j + 1;
}
putchar('\n');
return (0);
}
