#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* str_concat - Concatenates two strings.
*
* @s1: The first string to concatenate.
* @s2: The second string to concatenate.
* Return: A pointer to a newly allocated space
* in memory containing the concatenated
* strings, or NULL if memory allocation fails.
*/
char *str_concat(char *s1, char *s2)
{
char *copy;
int x = 0, i;
int k = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[x] != '\0')
{
x++;
}
while (s2[k] != '\0')
{
k++;
}
copy = (char *)malloc((x + k + 1) * sizeof(char));
if (copy == NULL)
{
printf("something went wrong");
return (NULL);
}
for (i = 0; i < x; i++)
{
copy[i] = s1[i];
}
for (i = 0; i <= k; i++) /* Include the null terminator */
{
copy[i + x] = s2[i];
}
return (copy);
}
