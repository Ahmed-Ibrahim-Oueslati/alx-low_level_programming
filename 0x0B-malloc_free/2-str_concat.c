#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* str_concat - Concatenates two strings.
*
* @s1: The first string to concatenate.
* @s2: The second string to concatenate.
* Return: A pointer to a newly allocated space
*in memory containing the concatenated
* strings, or NULL if memory allocation fails.
*/
char *str_concat(char *s1, char *s2)
{
char *copy;
int x = 0, i;
int k = 0;
/* Find the length of the first string */
while (s1[x] != '\0')
{
x++;
}
/* Find the length of the second string */
while (s2[k] != '\0')
{
k++;
}
/*
 *Allocate memory for the concatenated copy,
 *including space for the null terminator
 */
copy = (char *)malloc((x + k + 1) * sizeof(char));
if (copy == NULL)
{
printf("something went wrong");
return (NULL);
}
/* Copy the first string */
for (i = 0; i < x; i++)
{
copy[i] = s1[i];
}
/* Copy the second string */
for (i = 0; i <= k; i++) /* Include the null terminator */
{
copy[i + x] = s2[i];
}
return (copy);
}
