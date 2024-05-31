#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* create_array - Entry point of the program.
*
* Description: creates an array of chars,
*@size: size of the array
*@c: the first char
* Return: Always 0 (success).
*/
char *create_array(unsigned int size, char c)


{
char *p;
unsigned int i;
if (size == 0)

{
return (NULL);
}
p = (char *)malloc(size * sizeof(char));

if (p == NULL)

{
return (NULL);
}

for (i = 0; i < size; i++)

{
p[i] = c;
}
return (p);
}
