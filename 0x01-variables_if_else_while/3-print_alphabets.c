#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the alphabets in lower&uppercase  to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int j=65,n=97;
while (n < 123)
{
putchar(n);

n = n + 1;
}
while (j < 91)
{
putchar(j);
j = j + 1;
if (j == 90)
putchar('\n');
}
return (0);
}
