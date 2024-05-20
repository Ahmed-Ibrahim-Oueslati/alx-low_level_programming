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

 unsigned int sumdigits(unsigned int num)
 {
//base case
if (num == 0)
return 0;
return (num % 10) + sumdigits(num / 10);
 }
int main(void)
{
int h; 
h = sumdigits(55);
printf("%d \n", h);
return (0);
}
