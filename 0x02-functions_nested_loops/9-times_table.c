#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * times_table - Entry point of the program.
 *
 * Description:  prints the 9 times table, starting with 0
 *
 * Return: nothing (void).
 */
void times_table(void)
{
int i = 0;
int j = 0;
int k = 0;
while (j < 10)
{
while (k < 10)
{
_putchar('0' + i);
_putchar(44);
k++;
}
_putchar(10);
j++;
}
}
