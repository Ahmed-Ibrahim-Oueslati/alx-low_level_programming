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
if (n == 57)
{
putchar('\n');
}
n = n + 1;
}
return (0);
}
