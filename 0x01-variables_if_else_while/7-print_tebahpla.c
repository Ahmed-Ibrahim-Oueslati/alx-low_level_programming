#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the alphabets in reverse.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int n = 122;
while (n > 98)
{
putchar(n);
if (n == 96)
{
putchar('\n');
}
n = n - 1;
}
return (0);
}
