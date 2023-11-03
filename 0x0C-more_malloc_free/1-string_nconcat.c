#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * s1 followed by n bytes of s2
 * Return: pointer to newly allocated spcae
 * @s1: first string
 * @s2: string where n bytes will be taken from
 * @n: number of bytes to copy from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2, i, j, size;
	char *cat;

	size1 = strlen(s1);
	size2 = strlen(s2);
	size = size1 + 1;
	if (s1 == NULL && s2 == NULL)
	{
		cat = malloc(sizeof(char));
		if (cat == NULL)
		{
			return (NULL);
		}
		cat[0] = '\0';
		return (cat);
	}
	else if (s1 == NULL)
	{
		cat = malloc((n + 1) * sizeof(char));
		if (cat == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < n; i++)
		{
			cat[i] = s2[i];
		}
		cat[i] = '\0';
		return (cat);
	}
	else if (s2 == NULL)
	{
		cat = malloc(sizeof(s1));
		if (cat == NULL)
		{
			return (NULL);
		}
		strcpy(cat, s1);
		return (cat);
	}
	if (n >= size2)
	{
		cat = malloc(size1 + size2 + 1);
		if (cat == NULL)
		{
			return (NULL);
		}
		strcpy(cat, s1);
		for (i = size, j = 0; j <= size2; i++, j++)
		{
			cat[size1 + j] = s2[j];
		}
		cat[size1 + j] = '\0';
		return (cat);
	}
	else
	{
		cat = malloc(size1 + n + 1);
		if (cat == NULL)
		{
			return (NULL);
		}
		strcpy(cat, s1);
		for (i = size, j = 0; j < n; i++, j++)
		{
			cat[size1 + j] = s2[j];
		}
		cat[size1 + j] = '\0';
	}
	return (cat);
}
