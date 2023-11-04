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
void times_table(void)
{
	int p  ,i , j  ;
	for ( i =0 ; i<=9;i++)
	{
		 for ( j =0 ; j<=9;j++)
		 {
			  p = j * i;
			
			if ((p/10)!=0)
			{	
			  _putchar('0'+ (p/10));
			}
	     		_putchar('0'+ (p%10));
		 		 _putchar(44);
                                 _putchar(32);
		 }
				_putchar('\n');

		 
	}
}
