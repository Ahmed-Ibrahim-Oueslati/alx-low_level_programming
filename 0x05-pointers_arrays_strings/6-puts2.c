#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * void puts2(char *str) - Entry point of the program.
 *
 * Description: prints every other character of a string,
 * starting with the first character, followed by a new line.
 *@str: string to manipulate
 * Return: void
 */
void puts2(char *str)
{
int j = 0, i;
while (str[j] != '\0')
{
j++;
}
printf("j = %d\n", j);
for (i = 0; i <= j; i++)
{
_putchar(str[0]);
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar(10);
}
