#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints all possible combination of single digits  to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int n = 48;
while (n < 58)
{
putchar(n);
if (n < 57)
{
putchar(44);
putchar(32);
}
n = n + 1;
}

putchar('\n');
return (0);
}
