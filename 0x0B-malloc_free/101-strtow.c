#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*wcount - counts the nb of words in a string
*@str: string to be count
*Return: the lenght of the string 
*/
int wcount(char *str)
{
int word_count, i;
word_count = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
word_count++;
}
}
return (word_count);
}
/**
* alloc_char_grid - Allocates a 2D array of chars
*
* @width: The width of the grid.
* @height: The height of the grid.
*
* Return: A pointer to the newly allocated 2D array,
* or NULL if width or height is 0 or negative,
* or if memory allocation fails.
*/
char **alloc_char_grid(int width, int height)
{
char **k;
int i, j;
if (width <= 0 || height <= 0)
{
return ((NULL));
}
/* Allocate memory for the array of pointers to rows */
k = (char **)malloc(height * sizeof(char *));
if (k == NULL)
{
return ((NULL));
}
/* Allocate memory for each row and initialize it to 0 */
for (i = 0; i < height; i++)
{
k[i] = (char *)malloc(width * sizeof(char));
if (k[i] == NULL)
{
/* Free any previously allocated memory on failure */
for (j = 0; j < i; j++)
{
free(k[j]);
}
free(k);
return ((NULL));
}
for (j = 0; j < width; j++)
{
k[i][j] = 0;
}
}
return ((k));
}
/**
* strtow - Splits a string into words
* @str: The string to split
* Return: A pointer to an array of words, or NULL on failure
*/
char **strtow(char *str)
{
char **p;
int i, j, k, word_count, word_len;
char *word;
if (str == NULL || *str == '\0')
{
return ((NULL));
}
word_count = wcount(str);
/* Allocate memory for the array of words */
p = (char **)malloc((word_count + 1) * sizeof(char *));
if (p == NULL)
{
return ((NULL));
}
if (word_count == 0)
{
return ((NULL));
}
k = 0;
for (i = 0; i < word_count; i++)
{
/* Find the start of the next word */
while (str[k] == ' ')
{
k++;
}
/* Calculate the length of the word */
word_len = 0;
while (str[k + word_len] != ' ' && str[k + word_len] != '\0')
{
word_len++;
}
/* Allocate memory for the word and copy it */
word = (char *)malloc((word_len + 1) * sizeof(char));
if (word == NULL)
{
for (j = 0; j < i; j++)
{
free(p[j]);
}
free(p);
return ((NULL));
}
strncpy(word, &str[k], word_len);
word[word_len] = '\0';
p[i] = word;
/* Move to the next word */
k += word_len;
}
p[word_count] = NULL;
return ((p));
}
