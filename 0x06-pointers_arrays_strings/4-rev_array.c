#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry point of the program.
 *
 * Description:  reverses the content of an array of integers.
 *@n:n is the number of elements of the array
 *@a:array to reverse
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n / 2; i++)
{
int temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}

}
