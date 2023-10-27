#include <stdlib.h>
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
int i=48 ;              
        while (i<58)
	{
	putchar(i);
	putchar(44); // Prints ','
	putchar(32); // Prints a space
	i++;
	}
	putchar(10);	
return (0);   
}
