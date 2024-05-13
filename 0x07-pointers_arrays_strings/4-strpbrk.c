#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
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
 * _strncpy - Entry point of the program.
 *
 * Description: copies a string.
 *@dest: string 1
 *@src: string 2
 *@n: nb of bytes
 * Return: Always 0 (success).
 */
char *_strncpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}


return (dest);
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
j = 0;
while (s[j] != '\0')
{
    j++;
}

    h = (char *)malloc(j); 
    if (h == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
/* for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A' ))
{
h[i] = *_strchr(accept, s[i]);
}
else 
h[i] = s[i];
}

return (h); */

 for (i = 0; s[i] != '\0'; i++) {
        if (_strchr(accept, s[i]) != NULL) {
            _strncpy(h, &s[i]); /* Copy substring of s starting from s[i] into h*/
            return h;
        }
    }

    /* If no character from accept is found in s*/
    free(h); /* Free the allocated memory before returning NULL*/
    return NULL;
}
