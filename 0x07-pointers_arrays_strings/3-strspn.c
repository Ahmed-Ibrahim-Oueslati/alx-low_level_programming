#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Description:
 * This function locates the first occurrence of
 *the character 'c' in the string 's'.
 *
 * Return:
 * - If 'c' is found, a pointer to the first occurrence.
 * - If 'c' is not found, NULL.
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
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to parse.
 * @accept: The set of characters to search for in 's'.
 *
 * Description:
 * This function gets the length of the
 * prefix substring of 's' that consists only
 * of characters present in the 'accept' string.
 *
 * Return:
 * The length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
i = 0;
while (s[i] != '\0' && _strchr(accept, s[i]) != NULL)
{
i++;
}
return (i);
}

