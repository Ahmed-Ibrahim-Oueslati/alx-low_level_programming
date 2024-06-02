#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* argstostr - Concatenates all the arguments into a single string.
*
* @ac: Argument count.
* @av: Argument vector.
*
* Return: Pointer to the new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
char *p;
int i, j, k, max_len, tmp;
if (ac == 0 || av == NULL)
{
return (NULL);
}
/* Calculate total length of the new string */
max_len = 0;
for (i = 0; i < ac; i++)
{
tmp = 0;
while (av[i][tmp] != '\0')
{
tmp++;
max_len++;
}
max_len++; /* For the newline character after each argument */
}
/* Allocate memory for the concatenated string */
p = (char *)malloc((max_len + 1) * sizeof(char));
if (p == NULL)
{
printf("something went wrong");
return (NULL);
}
/* Copy the arguments into the new string */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
p[k++] = av[i][j];
}
p[k++] = '\n'; /* Add a newline after each argument */
}
p[k] = '\0'; /* Null-terminate the new string */
return (p);
max_len
}
