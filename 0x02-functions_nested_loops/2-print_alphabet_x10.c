#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point of the program.
 *
 * Description: Prints the alphabet in lowercase 10 times  to the console.
 *
 * Return: Always 0 (success).
 */
void print_alphabet_x10(void)
{
int j = 1;
while (j < 11)
{
int n = 97;
while (n < 123)
{
putchar(n);
if (n == 122)
{
putchar('\n');
}
n++;
}
j++;
}

}

