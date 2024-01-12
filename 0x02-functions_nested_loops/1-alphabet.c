#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the alphabet in lowercase to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int n = 97;
while (n < 122)
{
_putchar(n);
if (n == 122)
_putchar('\n');
n++;
}
return (0);
}
