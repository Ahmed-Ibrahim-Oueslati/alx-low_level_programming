#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * rot13 - Entry point of the program.
 *
 * Description: encodes a string using rot13.
 *@s: stringto encode 
 * Return: Always 0 (success).
 */
char *rot13(char *s)
{ 
int i; 
int j;

char p[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char p2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";




for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 51; j++)
{
if (s[i] == p[j])
{
s[i] = p2[j];
 break;
}
}
}
return (s);
}
