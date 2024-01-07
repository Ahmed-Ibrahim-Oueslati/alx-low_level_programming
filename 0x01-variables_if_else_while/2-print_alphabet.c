#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the alphabet to the consol.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int n = 97;
while (n < 123)
{
putchar(n);
if (n == 122)
{
putchar('\n');
}
n = n + 1;
}
return (0);
}
