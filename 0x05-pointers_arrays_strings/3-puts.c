#include <stdlib.h>
#include "main.h"
#include <stdio.h>
int _strlen(char *s);
/**
 *_puts - Entry point of the program.
 *
 * Description: prints a string, followed by a new line
 *
 * Return: void.
 */
 int _strlen(char *s)
{
int j = 0;
while (s[j] != '\0')
{
j++;
}
return (j);
}
void _puts(char *str)
{
int i;
int y =  _strlen(str);
for (i=0; i < y; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
