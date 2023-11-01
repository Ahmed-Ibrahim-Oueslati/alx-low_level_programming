#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * Return: pointer to new space in memory with concatenated strings
 * Null if malloc failed
 * @s1: first string
 * @s2: second string
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int i, j;
if (s1 == NULL && s2 == NULL)
{
s = malloc(sizeof(char));
s[0] = '\0';
return (s);
}
else if (s1 == NULL)
{
s = malloc(sizeof(s2));
strcpy(s, s2);
return (s);
}
else if (s2 == NULL)
{
s = malloc(sizeof(s1));
strcpy(s, s1);
return (s);
}
s = malloc(sizeof(s1) - 1 + sizeof(s2));
if (s == NULL)
return (NULL);
strcpy(s, s1);
for (i = strlen(s1), j = 0; s2[j] != '\0'; i++, j++)
{
s[i] = s2[j];
}
s[i] = '\0';
return (s);
}
