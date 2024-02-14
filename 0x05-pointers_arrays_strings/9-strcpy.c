#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Entry point of the program.
 *
 * Description: copies the string pointed to by src, including 
 * the terminating null byte (\0), to the buffer pointed to by dest.
 *@dest:
 *@src:
 * Return: a pointer to string .
 */
char *_strcpy(char *dest, char *src)
{ 
int j = 0, i;
    while (src[j] != '\0')
{
j++;
}
j = j - 1;
for (i=0; i < j; i++)
{
dest[i] = src[i] ;
}
dest[j] = '\0';
return (dest);
}
