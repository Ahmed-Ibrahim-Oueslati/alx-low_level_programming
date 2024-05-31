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
if (size == 0)
{
return (NULL);
}
p = malloc(size * sizeof(char));
if (p == NULL)
{
printf("something went wrong");
}
p[0] = c;
return (p);
}
