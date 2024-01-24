#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
void print_times_table(int n)
{
if ( n < 15 || n > 0)
{
int a = 0;
for (a ; a <= n; a++)
{
_putchar(48);
int b = 1;
for (b ; b < n ; b++)
{
int u ; 
u = b * a ;
_putchar(44);
_putchar(32);
_putchar(32);
if (u <= 9 )   
{
_putchar(32);
_putchar(u + 48);
} 

else if ( n >= 10 || n <= 99)
{
_putchar((u / 10) + 48);
_putchar((u % 10) + 48);
}
else 
{
_putchar(((u / 10) / 10)) + 48);
_putchar(((u / 10) % 10)) + 48);
_putchar((u % 10) + 48);
}
}
_putchar('\n');
}
}



















}
return (0);
}
