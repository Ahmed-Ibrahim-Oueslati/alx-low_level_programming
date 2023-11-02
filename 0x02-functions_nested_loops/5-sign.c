#include "./main.h"
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int print_sign(int n)
{
             if (n>0)
	     {
		     _putchar('+');
		     return(1);

	     }
	     if (n==0)

	     {
		     _putchar('0');
		     return(0);
	     }
	     if (n<0)
	     {
		     _putchar('-');
		     return(-1);
	     }
             
return (0);   
}
