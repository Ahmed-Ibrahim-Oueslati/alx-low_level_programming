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
int j = 0, i;
while (src[j] != '\0')
{
j++;
}
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
