#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Entry point of the program.
 *
 * Description: Prints n times table
 *
 * Return: void
 *@n: parameter of the table
 */
void print_times_table(int n)
{
if (n <= 15 &&  n >= 0)
{
int a;
int b;
for (a = 0 ; a <= n ; a++)
{
_putchar(48);
for (b = 1 ; b <= n ; b++)
{
int u;
u = b * a;
_putchar(44);
_putchar(32);
if (u <= 9)
{
_putchar(32);
_putchar(32);
_putchar(u + 48);
}
else if (u >= 10 &&  u <= 99)
{
_putchar(32);
_putchar((u / 10) + 48);
_putchar((u % 10) + 48);
}
if (u > 99)
{
int i = u / 100;
int p = u / 10;
int k = p % 10;
int t = u % 10;
_putchar(i + 48);
_putchar(k + 48);
_putchar(t + 48);
}
}
_putchar('\n');
}
}
}
