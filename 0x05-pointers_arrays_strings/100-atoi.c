#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _atoi - Entry point of the program.
 *
 * Description:  convert a string to an integer.
 *@s: string to be converted.
 * Return: Always 0 (success).
 */
int _atoi(char *s)
{
int j = 0;
int p = 1;
int k;
int i;
unsigned int L = 0;
int ini = 1;
int bnb = 1;
while (s[j] != '\0')
{
j++;
}
j--;


for (i = 0; i <= j ; i++)
{
if ( s[i] == '-') 
{
p = -p;
}
}

for (k = 0; k <= j; k++)
{
if (s[k] >= 48 && s[k] <= 57)
{ 
bnb++;
 L = (L * 10) + (s[k] - '0');
}
if (!(s[k] >= 48 && s[k] <= 57) && (bnb > ini))
{
break;
}
}  
L = L * p;
return (L);
}
