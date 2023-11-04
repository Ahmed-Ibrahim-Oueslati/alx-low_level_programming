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
	int p =0;
	for (int i =0 ; i<=9;i++)
	{
		 for (int j =0 ; j<=9;j++)
		 {
			  p = j * i;
			 if (p <10)
			 {
				 _putchar('0' +p);
			 }
			  _putchar('0'+ (p/10));
		 }		   _putchar('0'+ (p%10));


		 
	}
}
