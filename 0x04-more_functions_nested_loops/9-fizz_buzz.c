#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int i;
for (i = 0; i < 101; i++)
{
printf("%d ", i);
}
putchar('\n');
return (0);
}
