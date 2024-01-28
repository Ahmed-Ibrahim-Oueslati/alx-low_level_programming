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
int c;
for (b = 0; b < 10; b++)
{
for (a = 48; a < 58; a++)
{
write(1, &a, 1);
}
for (c = 10; c < 15; c++)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
