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
int i;
int j;

char p[] = "aeotl";
char p1[] = "AEOTL";
char p2[] = "43071";




for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 4; j++)
{
if (s[i] == p[j] || s[i] == p1[j])
{
s[i] = p2[j];
}
}
}
return (s);
}


