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
	int p = n%10;
	int j = _abs(p);


	
	_putchar(j +'0');
return(j);
}
