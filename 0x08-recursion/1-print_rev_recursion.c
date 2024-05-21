#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* length_string - Calculates the length of a string recursively.
* @s: The string to calculate length from.
* Return: The length of the string.
*/
int length_string(char *s)
{
if (*s == '\0')
{

return 0;
 
}
return 1 + length_string(s + 1);
}
/**
* rev_string - Reverses a string recursively.
* @s: The string to reverse.
* @h: Buffer to store the reversed string.
* @length: The length of the string.
* Return: A pointer to the reversed string.
*/
char *rev_string(char *s, char *h, int length)
{/*do it with a loop , make sure the rest of the code works then try something else : ok */
if (*s == '\0')
{
h[length] = '\0';

return h;
}
h[length] = *s;
return rev_string(s + 1, h, length - 1);
}

/**
* print_all_letters_starting_from - Entry point of the program.
* Description:Prints all letters starting from a given position in a string.
* @s: The string to print from.
*/
void print_all_letters_starting_from(char *s)

{

if (*s == '\0')

{
 
return;
}
_putchar(*s);
print_all_letters_starting_from(s + 1);
}

/**
* _puts_recursion - Prints a string, followed by a new line.
* @s: The string to print.
*/
void _puts_recursion(char *s)

{
print_all_letters_starting_from(s);

}
/**
* _print_rev_recursion - Entry point of the program.
*
* Description: prints a string in reverse.
*
* Return: Always 0 (success).
*/

void _print_rev_recursion(char *s)

{
    char *reversed;
    printf("lenght is %d\n", length_string(s));

reversed = malloc(length_string(s) + 1); 
    if (!reversed) {
        printf("failed");
        return;
    }
reversed[0] = '1';
    printf("the string is %s \n", reversed);
    printf("lenght is %d\n", length_string(reversed));
  reversed= rev_string(s, reversed, length_string(s));
   printf("lenght2 is %d\n", length_string(reversed));
  printf("the string is %s \n", s);
    _puts_recursion(s);
}



