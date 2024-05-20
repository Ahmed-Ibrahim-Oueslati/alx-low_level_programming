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
 unsigned int factorial(unsigned int n)
 {
if (n <= 1)
return 1;
return n * factorial(n - 1);
 }
int main(void)
{
int f; 
f = factorial(5);
printf("%d \n", f);
return (0);
}
