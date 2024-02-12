#include <stdlib.h>
#include "main.h"
#include <stdio.h>
int _strlen(char *s);
/**
 *_puts - Entry point of the program.
 *
 * Description: prints a string, followed by a new line
 *@str:string to print
 * Return: void.
 */
void _puts(char *str)
{
int j = 0;
int i;
while (str[j] != '\0')
{
j++;
}
for (i = 0; i < j; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
