#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: prints an integer..
 *
 * Return: Always 0 (success).
 */
void print_number(int n)
{
int reversed = 0;
if (n < 0)
n = n * -1;
{
if (n < 10)
{
_putchar('-');
_putchar(n + '0');
}
if (n > 10)
{
_putchar('-');
while (n > 0)
{
int nuh = n % 10;
reversed = reversed * 10 + nuh;
n /= 10;
}
while (reversed > 0)
{
int digit = reversed % 10;
_putchar(digit + '0');
reversed /= 10;
}
}
}
if (n >= 0)
{
if (n < 10) 
{
_putchar(n + '0');
}
if (n > 10)
{
while (n > 0)
{
int nuh = n % 10;
reversed = reversed * 10 + nuh;  
n /= 10;   
}
while (reversed > 0)
{
int digit = reversed % 10;
_putchar(digit + '0');
reversed /= 10;
}
}
}
}
