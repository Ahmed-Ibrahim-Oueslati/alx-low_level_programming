#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* _strdup - Entry point of the program.
*
* Description:
*@str: string provided
* Return: returns a pointer to a newly allocated space in memory
*/
char *_strdup(char *str)

{
char *copy;
int x, i;
while (str[x] != '\0')

{
x++;
}
x = x + 1;

copy = (char *)malloc(x * sizeof(char));

if (copy == NULL)
{
return (NULL);
}
for (i = 0; i < x; i++)

{
copy[i] = str[i];
}

return (copy);
}
