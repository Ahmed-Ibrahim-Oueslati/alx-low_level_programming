#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * checker - Recursively checks if two strings match, considering '*' wildcard.
 * @s1: The first string to check.
 * @x: The current index in the first string.
 * @s2: The second string to check (may contain '*').
 * @y: The current index in the second string.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */
int checker(char *s1, int x, char *s2, int y)


{
/*If we reach the end of both strings, they match*/
if (s1[x] == '\0' && s2[y] == '\0')
return (1);

/*If the current character of s2 is '*'*/
if (s2[y] == '*')
{
/*Skip '*' and try to match with the remaining characters in s2*/
if (s2[y + 1] == '\0' || checker(s1, x, s2, y + 1))
return (1);
/*Try to match '*' with current character in s1 and continue*/
if (s1[x] != '\0' && checker(s1, x + 1, s2, y))
return (1);
}

/*If current characters match*/
if (s1[x] == s2[y])
return (checker(s1, x + 1, s2, y + 1));

/*If characters do not match and no wildcard condition satisfied*/
return (0);
}
/**
 * wildcmp - Compares two strings considering '*' wildcard.
 * @s1: The first string to compare.
 * @s2: The second string to compare (may contain '*').
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)

{
return (checker(s1, 0, s2, 0));

}
