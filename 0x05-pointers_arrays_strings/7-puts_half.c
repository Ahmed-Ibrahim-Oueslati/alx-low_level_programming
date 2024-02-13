#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * puts_half - Entry point of the program.
 *
 * Description: prints half of a string, followed by a new line.
 *
 * Return: void.
 */
void puts_half(char *str)
{
int j = 0, i;
while (str[j] != '\0')
{
j++;
}
j = j - 1;
for (i = j/2 + 1; i <= j; i++)
{
_putchar(str[i]);
}
_putchar(10);
}

