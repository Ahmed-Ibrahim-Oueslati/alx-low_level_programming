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
int k;
if (n < 0)
{
n = n * -1;
}
k = n % 10;
printf("%d",k);
return (k);
}
