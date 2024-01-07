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
int n = 97;
while (n < 123 )
{
if ( (n != 113) && (n != 101))
{
putchar(n);
if (n == 122)
{
putchar('\n');
}
}
n = n + 1;
}
return (0);
}
