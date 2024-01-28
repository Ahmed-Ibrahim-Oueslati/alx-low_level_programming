#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * more_numbers - Entry point of the program.
 *
 * Description: Prints from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
int a;
int b;
for (b = 0; b < 10; b++)
{
for (a = 0; a < 15; a++)
{
if (a < 10)
{

write(1, &a, 1);
}
else
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
}
_putchar('\n');
}
}
