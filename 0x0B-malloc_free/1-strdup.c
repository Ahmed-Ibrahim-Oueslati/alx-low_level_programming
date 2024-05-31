#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* _strdup - Duplicates a given string.
*
* @str: The string to be duplicated.
*
* Return: A pointer to the newly allocated space
* in memory containing the duplicated string,
* or NULL if str is NULL or if memory allocation fails.
*/
char *_strdup(char *str)

{
char *copy;
int x = 0, i;

if (str == NULL)

{
return (NULL);
}

/* Find the length of the string */
while (str[x] != '\0')

{
x++;
}

/* Allocate memory for the copy, including space for the null terminator */
copy = (char *)malloc((x + 1) * sizeof(char));
if (copy == NULL)

{
printf("something went wrong");
return (NULL);
}

/* Copy the string */
for (i = 0; i <= x; i++) /* Include the null terminator */

{
copy[i] = str[i];
}
return (copy);
}
