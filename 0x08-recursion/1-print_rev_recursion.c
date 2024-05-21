#include <stdio.h>
#include <stdlib.h>



/**
* length_string - Calculates the length of a string recursively.
* @s: The string to calculate length from.
* Return: The length of the string.
*/
int length_string(char *s)

{
if (*s == '\0')
return 0;
return 1 + length_string(s + 1);
}

void rev_string_recursive(char *s, int start, int end)

{
char temp;
if (start >= end)
return;

/*Swap the characters*/
temp = s[start];
s[start] = s[end];
s[end] = temp;

/*Recur for the next pair*/
rev_string_recursive(s, start + 1, end - 1);
}

/**
* rev_string - Reverses a string in place.
* @s: The string to reverse.
*/
void rev_string(char *s)

{
int len = length_string(s);
rev_string_recursive(s, 0, len - 1);
}

/**
* print_all_letters_starting_from - Prints all letters starting from a given position in a string.
* @s: The string to print from.
*/
void print_all_letters_starting_from(char *s)

{
if (*s == '\0')
return;
putchar(*s);
print_all_letters_starting_from(s + 1);
}

/**
* _puts_recursion - Prints a string, followed by a new line.
* @s: The string to print.
*/
void _puts_recursion(char *s)

{
if (*s == '\0')
return;
printf("%c", *s);
_puts_recursion(s + 1);
}

/**
* _print_rev_recursion - Prints a string in reverse.
* @s: The string to print in reverse.
*/
void _print_rev_recursion(char *s)

{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
putchar(*s);
}

