#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * checker - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @x: The starting index.
 * @y: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int checker(char *s, int y, int x)

{
if (x >= y)/* Base case: When indices have met or crossed */
return (1);

if (s[x] != s[y]) /* If characters at current indices do not match */
return (0);

return (checker(s, x + 1, y - 1));
}

/**
* _strlen_recursion- Entry point of the program.
*
* Description:  returns the length of a string
*@s: string
* Return: Always 0 (success).
*/
int _strlen_recursion(char *s)


{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* is_palindrome - Entry point of the program.
*
* Description: check if a string is a palindrome
*@s: string to check
* Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)

{

int x;
x = _strlen_recursion(s);
if (x < 2)
return (1);

return (checker(s, x - 1, 0));
}
