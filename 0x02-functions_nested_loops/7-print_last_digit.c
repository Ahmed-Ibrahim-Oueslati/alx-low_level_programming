#include "./main.h"
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int _abs(int n)
{

        if (n>0)
        {
                return(n);
        }

        if (n ==0)
        {
                return(0);
        }

        if ( n<0)
        {
                return(-n);
        }


return (0);
}
int print_last_digit(int n)

{
	int j = _abs(n);


int p = j%10;
	
	_putchar(p +'0');
return(0);
}
