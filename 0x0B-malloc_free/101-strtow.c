#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* loc - Allocates memory for an array of words.
* @wocount: Number of words.
* Return: Pointer to an array of words.
*/
char **loc(int wocount)
{
char **p;
p = (char **)malloc((wocount + 1) * sizeof(char *));
if (p == NULL)
{
return ((NULL));
}
return ((p));
}
/**
* wcount - Counts the number of words in a string.
* @str: String to be counted.
* Return: The number of words in the string.
*/
int wcount(const char *str)
{
int word_count = 0;
int i = 0;
int in_word = 0;
while (str[i] != '\0')
{
if (str[i] != ' ' && !in_word)
{
in_word = 1;
word_count++;
}
else if (str[i] == ' ' && in_word)
{
in_word = 0;
}
i++;
}
return ((word_count));
}
/**
* free_words - Frees memory allocated for words.
* @words: Array of words.
* @count: Number of words.
*/
void free_words(char **words, int count)
{
int i;
for (i = 0; i < count; i++)
{
free(words[i]);
}
free(words);
}
/**
* strtow - Splits a string into words.
* @str: The string to split.
* Return: A pointer to an array of words, or NULL on failure.
*/
char **strtow(char *str)
{
char **words;
int  k, w, word_count, word_len;
char *word;
if (str == NULL || *str == '\0')
{
return ((NULL));
}
word_count = wcount(str);
if (word_count == 0)
{
return ((NULL));
}
words = loc(word_count);
if (words == NULL)
{
return ((NULL));
}
k = 0;
for (w = 0; w < word_count; w++)
{
while (str[k] == ' ') /* Find the start of the next word */
{
k++;
}
word_len = 0; /* Calculate the length of the word */
while (str[k + word_len] != ' ' && str[k + word_len] != '\0')
{
word_len++;
}
/* Allocate memory for the word and copy it */
word = (char *)malloc((word_len + 1) * sizeof(char));
if (word == NULL)
{
free_words(words, w);
return ((NULL));
}
strncpy(word, &str[k], word_len);
word[word_len] = '\0';
words[w] = word;
k += word_len; /* Move to the next word */
}
words[word_count] = NULL;
return ((words));
}
