#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* checker - Recursively checks if a string is a palindrome.
* @s: The string to check.
* @x: The starting index.
* @y: The ending index.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int checker(char *s, int x, int y)

{
if (x >= y) /* Base case: When indices have met or crossed */
return (1);

if (s[x] != s[y]) /* If characters at current indices do not match */
return (0);

return (checker(s, x + 1, y - 1)); /* Recur for the next pair of characters */
}

/**
* _strlen_recursion - Returns the length of a string.
* @s: The string whose length is to be calculated.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)

{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to check.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)

{
int len = _strlen_recursion(s);
if (len < 2)
return (1);
return (checker(s, 0, len - 1));
}
