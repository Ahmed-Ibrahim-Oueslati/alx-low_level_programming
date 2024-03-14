#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * leet - Entry point of the program.
 *
 * Description: encodes a string into 1337.
 *@s: string to encode 
 * Return: Always 0 (success).
 */
char *leet(char *s)
{
int i, j;
char p[] = "a4e3o0t7l1A4E3O0T7L1";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 20; j++)
{ 
if (p[j] == s[i])
{
s[i] = p[j + 1];
}
}
}
return (s);
}


