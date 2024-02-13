#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * rev_string- Entry point of the program.
 *
 * Description:reverses a string.
 *@s: string to reverse
 * Return: void.
 */
void rev_string(char *s)
{
int j = 0;
int i;
while (s[j] != '\0')
{
j++;
}
for (i = 0; i < j / 2; i++)
{
char temp = s[i];
s[i] = s[j - i - 1];
s[j - i - 1] = temp;
}
}