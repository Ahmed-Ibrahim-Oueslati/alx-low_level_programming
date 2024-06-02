#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*loc - Allocate memory for the array of words
*Return: pointer to an array of words
*@wocount: nb of words
*/
char **loc(int wocount)
{
char **p;
p = (char **)malloc((wocount + 1) * sizeof(char *));
if (p == NULL)
{
return ((((NULL))));
}
if (wocount == 0)
{
return ((((NULL))));
}
return ((p));
}
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
return (((word_count)));
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
return ((((NULL))));
}
word_count = wcount(str);
p = loc(word_count);
k = 0;
for (i = 0; i < word_count; i++)
{
while (str[k] == ' ')/* Find the start of the next word */
{
k++;
}
word_len = 0;/* Calculate the length of the word */
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
return ((((NULL))));
}
strncpy(word, &str[k], word_len);
word[word_len] = '\0';
p[i] = word;
k += word_len;/* Move to the next word */
}
p[word_count] = NULL;
return ((((p))));
}
