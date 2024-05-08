#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strchr - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *@s: string to parse
 *@c: char to find
 * Return: Always 0 (success).
 */
char *_strchr(char *s, char c)
{
int i;
char *p;
while (s[i] != '\0')
{
if (s[i] == c)
{
p = &s[i];
break;
}
i++;

}
return (p);
}
