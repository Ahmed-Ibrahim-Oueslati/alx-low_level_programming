#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point of the program.
 *
 * Description:returns the length of a string.
 *@s:string to mesure
 * Return: the lentgh of a string.
 */
int _strlen(char *s)
{
int j = 0;
while (s[j] != '\0')
{
j++;
}
return (j);
}
