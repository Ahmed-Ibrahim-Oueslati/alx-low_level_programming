#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * cap_string - Entry point of the program.
 *
 * Description: capitalizes all words of a string.
 *@s: string that all of it's words will be capitalized.
 * Return: Always 0 (success).
 */
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '\t' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||  s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '\n')
{
if (s[i + 1] <= 'z' && s[i + 1] >= 'a')
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}

