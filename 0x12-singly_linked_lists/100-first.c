#include <stdio.h>

/**
 * printbefore - prints string before main is executed
 * Return: void
 */
void printbefore(void) __attribute__ ((constructor));
void printbefore(void)
{
	    printf("You're beat! and yet, you must allow,\n");
	    printf("I bore my house upon my back!\n");
}