#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point of the program.
 *
 * Description: Prints the alphabet in lowercase to the console.
 *
 * Return: Always 0 (success).
 */
void print_alphabet(void)
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

}
