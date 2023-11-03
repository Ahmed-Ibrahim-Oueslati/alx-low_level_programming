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
void jack_bauer(void)
{
int i=48, k=48 , j=48 ,p=48;
        while (i<=50)
        {

        _putchar(i);
        _putchar(k);
        _putchar(32);
        _putchar(j);
        _putchar(p);

        putchar(44);
        putchar(32);

        p++;
        if (p==58)
        {
        p=p-10;

        j++;
        }
        if (j==54)
        {
        j =j-5;
        k++;
        }
        if (k==58)
        {
        k=k-10;
        i=i+1;
        }
        }
        putchar(10);
}
             
