#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * swap_int - Entry point of the program.
 *
 * Description: swp the values of 2 integers.
 *@a:parameter
 *@b:parameter
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
