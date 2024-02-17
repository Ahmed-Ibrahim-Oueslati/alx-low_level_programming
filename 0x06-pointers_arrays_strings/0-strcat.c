#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strcat - Entry point of the program.
 *
 * Description: concatenates two strings.
 *@dest: string 1
 *@src: string 2
 * Return: char.
 */
char *_strcat(char *dest, char *src)
{
int j = 0 , i = 0;
char *p = "";
while (dest[j] != '\0')
{
j++;
}
while (src[i] != '\0')
{
dest[j] = src[i];
j++;
i++;
}
dest[j+1] = '\0';
return (p);
}
