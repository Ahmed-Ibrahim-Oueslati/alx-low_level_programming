#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Entry point of the program.
 *
 * Description: copies a string.
 *@dest: string 1
 *@src: string 2
 *@n: nb of bytes
 * Return: Always 0 (success).
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

if ((n - i) > 1)
{
for (j = i; j < n; j++)
{
dest[j] = '\0';
}
}
return (dest);
}
