#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - Entry point of the program.
 *
 * Description: copies a string.
 *@dest: string 1
 *@src: string 2
 * Return: Always 0 (success).
 */
char *_strncpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

return (dest);
}
char *_strstr(char *haystack, char *needle)
{
int haystack_len = 0;
int needle_len = 0;
int i, j;
char *h;

/* Calculate the length of haystack and needle*/
while (haystack[haystack_len] != '\0')
haystack_len++;
while (needle[needle_len] != '\0')
needle_len++;

/* Allocate memory for the substring*/
h = (char *)malloc((haystack_len + 1) * sizeof(char));
if (h == NULL)
{
printf("Memory allocation failed.\n");
return (NULL);
}

/*Iterate through haystack to find the substring*/
for (i = 0; i <= haystack_len - needle_len; i++)
{
/* Check if needle matches substring starting from haystack[i]*/
for (j = 0; j < needle_len; j++)
{
if (haystack[i + j] != needle[j])
break; /*Not a match*/
}
/*If needle matches substring starting from haystack[i]*/
if (j == needle_len)
{
/*Copy the substring from haystack to h */
_strncpy(h, haystack + i);
return (h);
}
}

/* If substring is not found, free memory and return NULL */
free(h);
return (NULL);
}


















