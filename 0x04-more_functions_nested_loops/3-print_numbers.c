#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Entry point of the program.
 *
 * Description: Prints from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
int a;
for (a = 0; a < 10; a++)
{
_putchar(a + '0');
}
}
