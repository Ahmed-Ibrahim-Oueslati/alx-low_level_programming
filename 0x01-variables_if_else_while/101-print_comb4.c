#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the combination of 3 digits.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int n = 48;
int j = 48;
int k = 48;
while (n < 56)
{
while (j < 57)
{ 
while (k < 58)
{
if (j > n && j != n)
{
if (k > j && k != j)
{
putchar(n);
putchar(j);
putchar(k);
if (n < 55)
{
putchar(44);
putchar(32);
}
}
}
k++;
}
k = k - 9;
j++;
}
j = j - 9;
n = n + 1;
}
putchar('\n');
return (0);
}
