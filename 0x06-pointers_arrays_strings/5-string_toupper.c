#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - Entry point of the program.
 *
 * Description: changes all lowercase letters of a string to uppercase.
 *@str: string to change
 * Return: Always 0 (success).
 */
char *string_toupper(char *str)
{
int j = 0;
int i;
while (str[j] != '\0')
{
j++;
}
j--;
for (i = 0; i < j; i++)
{
if (str[j] <= 122 || str[j] >= 97)
{
str[j] = str[j] - 32;
}
}
return (str);
}
