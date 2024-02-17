#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strncat - Entry point of the program.
 *
 * Description: concatenates two strings.
 *@dest: string 1
 *@src: string 2
 *@n: nb of bytes
 * Return: char .
 */
char *_strncat(char *dest, char *src, int n)
{
int j = 0, i = 0;
while (dest[j] != '\0')
{
j++;
}
while (src[i] != '\0' && i + 1  <= n)
{
dest[j] = src[i];
j++;
i++;
}
dest[j + 1] = '\0';
return (dest);
}
