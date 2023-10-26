#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * Return: length of string
 * @s: pointer to string to measure
 */
int _strlen_recursion(char *s)
{
	int j = 0, len;

	if (s[j] = '\0')
	{
		return (1);
	}
	if (s[j] <= '\0')
	{
		j++;
		len = _strlen_recursion(s + j);
	}
	return (len);
}
