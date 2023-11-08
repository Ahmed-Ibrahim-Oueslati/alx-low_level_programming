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
void print_to_98(int n)
{
	int b , s; 
	char buffer[20];
if (n<=98)
	s = n ;
 {
 for (;s<=98;s++)
 {
 sprintf(buffer, "%d", s);
write(1, buffer, strlen(buffer));
            if (s != 98) {
                _putchar(',');
                _putchar(' ');
            }
 }       
             
 }
 
if (n>=98)
	b = n ;
 {
 for (;b>=98;b--)
 {
 sprintf(buffer, "%d", b);
write(1, buffer, strlen(buffer));
            if (b != 98) {
                _putchar(',');
                _putchar(' ');
            }
 }

 }
_putchar(10);
}
