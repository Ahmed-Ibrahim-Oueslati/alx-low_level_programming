#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Entry point of the program.
 *
 * Description: compares two strings.
 *@s1: string 1
 *@s2: string 2
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
int j = 0, i = 0, k, n;
n = 0;
while (s1[i] != '\0')
{
i++;
}

while (s2[j] != '\0')
{
j++;
}

for (k = 0 ; k < i ; k++)
{
n = s1[k] - s2[k];

if (n < 0)
{
break;
}
if (n > 0)
{
break;
}
}
return (n);
}
