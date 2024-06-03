#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* string_nconcat - Entry point of the program.
* Description: concatenates two strings.
*@s1: string 1
*@s2: string 2
*@n: nb of bytes
* Return: a pointer to s1 or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k, l;
char *p;
i = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
j = 0;
while (s2[j] != '\0')
{
j++;
}
if (n > j)
{
n = j;
}
k = n + i + 1;
p = malloc(sizeof(char) * k);
 if (p == NULL)
        return (NULL);
for (l = 0; l < i; l++)
{
p[l] = s1[l];
}
for (l = 0; l < n; l++)
{
p[l + i] = s2[l];
}
p[k - 1] = '\0';
return (p);
}
