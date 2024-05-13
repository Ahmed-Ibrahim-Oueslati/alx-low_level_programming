#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strchr - Entry point of the program.
 *
 * Description: a function that locates a character in a string.
 *@s: string to parse
 *@c: char to find
 * Return: Always 0 (success).
 */
char *_strchr(char *s, char c)
{
int i;
char *p = NULL;
i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
p = &s[i];
break;
}
i++;
}

if (p == NULL)
{
return (NULL);
}
return (p);
}

/**
 * _strpbrk- Entry point of the program.
 *
 * Description: searches a string for any of a set of bytes
 *@s: string to be parced
 *@accept: set of characters to look for
 * Return: Always 0 (success).
 */
char *_strpbrk(char *s, char *accept)
{

 
int i, j;
char *h;
while (accept[j] != '\0')
{
    j++;
}

    h = (char *)malloc(j); 
    if (h == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
for (i = 0; accept[i] != '\0'; i++)
{
if ((accept[i] <= 'z' && accept[i] >= 'a') || (accept[i] <= 'Z' && accept[i] >= 'A' ))
{
h[i] = *_strchr(s, accept[i]);
}
else 
h[i] = accept[i];
}
return (h);
}
