#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strchr - Entry point of the program.
 *
 * Description: a function that locates a character in a string.
 *@s: string to parse
 *@c: char to find
 * Return: Always 0 (success).
 */
char *_strchr(char *s, char c)
{
int i;
char *p = NULL;
i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
p = &s[i];
break;
}
i++;
}

if (p == NULL)
{
return (NULL);
}
return (p);
}
