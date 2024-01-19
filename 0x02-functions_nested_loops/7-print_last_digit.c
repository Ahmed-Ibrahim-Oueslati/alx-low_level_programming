#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last difit of a nb
 * Return: a postive int
 * @n: n is the number to check (parameter)
 */
int print_last_digit(int n)
{
long j = (long)n;
long k;
if (j < 0)
{
j = -j;
}
k = j % 10;
_putchar('0' + k);
return (k);
}
