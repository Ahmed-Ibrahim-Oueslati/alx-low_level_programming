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
int i = 0, p;
while (s[j] != '\0')
{
j++;
}
p = j;
while (j >= 0 && i < p)
{
s[j] = s[i];
j--;
i++;
}

}
