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
if (((i % 3) != 0) && ((i % 5) != 0)  &&  i != 0)
{
printf("%d ", i);
}
if (((i % 3) == 0) && ((i % 5) == 0)  &&  i != 0)
{
printf("FizzBuzz ");
}
if (((i % 3) == 0) && ((i % 5) != 0)  &&  i != 0)
{
printf("Fizz ");
}
if (((i % 3) != 0) && ((i % 5) == 0)  &&  i != 0 && i != 100)
{
printf("Buzz ");
}
if (i == 100)
{
printf("Buzz");
}
}
putchar('\n');
return (0);
}
