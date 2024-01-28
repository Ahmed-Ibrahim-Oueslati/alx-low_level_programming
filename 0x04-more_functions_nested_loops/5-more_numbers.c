#include <stdlib.h>
#include "main.h"
#include <stdio.h>
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
for (a = 0; a < 9; a++)
{
_putchar(a + '0');
}
}
_putchar('\n');
}
}
