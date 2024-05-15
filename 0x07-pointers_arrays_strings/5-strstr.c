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
 * _strstr- Entry point of the program.
 *
 * Description: function that locates a substring
 *
 * Return: Always 0 (success).
 */
char *_strstr(char *haystack, char *needle)
{

int i, j;
char *h;


j = 0;
while (haystack[j] != '\0')
{
    j++;
}

    h = (char *)malloc(j); 
    if (h == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
 for (i = 0; haystack[i] != '\0'; i++)
{
h[i] = *_strchr(needle, haystack[i]);

}

return (h); 

 /* for (i = 0; s[i] != '\0'; i++) {
        if (_strchr(needle, s[i]) != NULL) {
            _strncpy(h, &s[i]);  Copy substring of s starting from s[i] into h*/
           /* return h;
        }
    }
*/
    /* If no character from accept is found in s*/
   /* Free the allocated memory before returning NULL*/


    return NULL;

}
